//
//  main.cpp
//  OpenCVTest
//
//  Created by 김다은 on 2017. 1. 20..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, const char * argv[]) {
    IplImage * img = cvCreateImage(cvSize(100, 200), IPL_DEPTH_8U, 3);
    cvNamedWindow("Image:", CV_WINDOW_AUTOSIZE);
    cvShowImage("Image", img);
    
    cvWaitKey(0);
    
    cvDestroyWindow("Image:");
    cvReleaseImage(&img);
    
    return 0;
}
