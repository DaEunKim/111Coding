//
//  main.cpp
//  디졸브_openCV
//
//  Created by 김다은 on 2017. 2. 17..
//  Copyright © 2017년 김다은. All rights reserved.
//

/* Library의 귀차니즘 */
//#pragma comment(lib, "cv200d.lib")
//#pragma comment(lib, "highgui200d.lib")
//#pragma comment(lib, "cvaux200d.lib")
//#pragma comment(lib, "cxcore200d.lib")
//
#include "cv.h"
#include "cxcore.h"
#include "highgui.h"

#include <iostream>
#include <cstdio>

int main()
{
    printf("1223");
    /* 비디오 연결 */
    CvCapture *SrcVideo_1 = cvCaptureFromFile("/Users/Dani/Downloads/notebook.mp4");
    CvCapture *SrcVideo_2 = cvCaptureFromFile("/Users/Dani/Downloads/goblin.mp4");
    
    
    /* 비디오 연결에 대한 예외 처리 */
    if(SrcVideo_1 == NULL || SrcVideo_2 == NULL) {
        std::cout << "Fail in loading the video.";
        return -1;
    }
    
    IplImage* VideoFrame_1 = NULL;
    IplImage* VideoFrame_2 = NULL;
    IplImage* DstImage = NULL;
    
    /* 윈도우 생성 */
    cvNamedWindow("VideoFrame_1___window", CV_WINDOW_AUTOSIZE);
    cvNamedWindow("VideoFrame_2___window", CV_WINDOW_AUTOSIZE);
    cvNamedWindow("DstImage___window", CV_WINDOW_AUTOSIZE);
    
    float alp = 0.0f;
    float dalp = 0.01f;
    
    /* 동영상은 계속 프레임을 반복, 따라서 while() 안에 처리 */
    while(true) {
        VideoFrame_1 = cvQueryFrame(SrcVideo_1);
        if(VideoFrame_1 == NULL) {
            cvSetCaptureProperty(SrcVideo_1, CV_CAP_PROP_POS_FRAMES, 0);
            VideoFrame_1 = cvQueryFrame(SrcVideo_1);
        }
        
        VideoFrame_2 = cvQueryFrame(SrcVideo_2);
        if(VideoFrame_2 == NULL) {
            cvSetCaptureProperty(SrcVideo_2, CV_CAP_PROP_POS_FRAMES, 0);
            VideoFrame_2 = cvQueryFrame(SrcVideo_2);
        }
        
        DstImage = cvCreateImage(cvGetSize(VideoFrame_1), IPL_DEPTH_8U, 3);
        
        /* Dissolve */
        for(int x=0; x<DstImage->width; x++) {
            for(int y=0; y<DstImage->height; y++) {
                CvScalar f1 = cvGet2D(VideoFrame_1, y, x);
                CvScalar f2 = cvGet2D(VideoFrame_2, y, x);
                CvScalar g;
                
                g.val[0] = ((1 - alp) * f1.val[0]) + (alp * f2.val[0]);
                g.val[1] = ((1 - alp) * f1.val[1]) + (alp * f2.val[1]);
                g.val[2] = ((1 - alp) * f1.val[2]) + (alp * f2.val[2]);
                
                cvSet2D(DstImage, y, x, g);
            }
        }
        
        cvShowImage("VideoFrame_1___window", VideoFrame_1);
        cvShowImage("VideoFrame_2___window", VideoFrame_2);
        cvShowImage("DstImage___window", DstImage);
        cvWaitKey(33);
        
        alp += dalp;
        if(alp > 1.0f) {
            dalp = -0.01f;
        }
        
        if(alp < 0.0f) {
            dalp = 0.01f;
        }
    }
    
    /* 모든 윈도우 파괴 */
    //`cvDestroyAllWindows();
   // cvWaitKey(1);
    
    /* 비디오 연결 해제 */
    cvReleaseCapture(&SrcVideo_1);
    cvReleaseCapture(&SrcVideo_2);
    
    /* 메모리 반환 */
    cvReleaseImage(&VideoFrame_1);
    cvReleaseImage(&VideoFrame_2);
    cvReleaseImage(&DstImage);
    
    /* OpenCV KOREA 및 네비어 쿱(bms2)님 소스 참조 하였습니다. */
    return 0;
}
