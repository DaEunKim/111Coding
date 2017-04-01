//
//  main.cpp
//  에지검출_openCV
//
//  Created by 김다은 on 2017. 3. 3..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace std;

int main(){
    IplImage* srcImage = cvLoadImage("/Users/Dani/Documents/111Coding/에지검출_openCV/에지검출_openCV/hanul.jpg", CV_LOAD_IMAGE_GRAYSCALE);
    IplImage* cannyImage1 = cvCreateImage(cvGetSize(srcImage), IPL_DEPTH_8U, 1);
    IplImage* cannyImage2 = cvCreateImage(cvGetSize(srcImage), IPL_DEPTH_8U, 1);
    IplImage* cannyImage3 = cvCreateImage(cvGetSize(srcImage), IPL_DEPTH_8U, 1);
    if(srcImage ==NULL)
        return -1;
    
    cvNamedWindow("TestImage", CV_WINDOW_AUTOSIZE);
    cvNamedWindow("CannyImage1", CV_WINDOW_AUTOSIZE);
    cvNamedWindow("CannyImage2", CV_WINDOW_AUTOSIZE);
    cvNamedWindow("CannyImage3", CV_WINDOW_AUTOSIZE);

    
    cvCanny(srcImage, cannyImage1, 50, 100, 3);
    cvCanny(srcImage, cannyImage2, 50, 200, 3);
    cvCanny(srcImage, cannyImage3, 100, 100, 3);
    
    cvShowImage("Test Image", srcImage);
    cvShowImage("cannyimage1", cannyImage1);
    cvShowImage("cannyimage2", cannyImage2);
    cvShowImage("cannyimage3", cannyImage3);
    cvWaitKey(0);
    
    cvDestroyAllWindows();
    cvReleaseImage(&srcImage);
    cvReleaseImage(&cannyImage1);
    cvReleaseImage(&cannyImage2);
    cvReleaseImage(&cannyImage3);
    
}
