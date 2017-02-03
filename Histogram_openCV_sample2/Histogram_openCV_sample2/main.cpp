//
//  main.cpp
//  Histogram_openCV_sample2
//
//  Created by 김다은 on 2017. 2. 3..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main(void) {
    Mat image = imread( "//Users/Dani/Documents/111Coding/Histogram_openCV_sample2/Histogram_openCV_sample2/color.jpg", -1 );
    if(image.data == NULL) return -1;
    vector<Mat> mv;
    
    split( image, mv );
    
    namedWindow( "Image" );
    imshow( "Image", mv[1] );
    waitKey( 0 );
    return 0;
}
/*
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

#define SCALE 0.2

int main(int argc, char** argv)
{
    
    
//    if (argc != 2)
//    {
//        cout << " Provide image name to read" << endl;
//        return -1;
//    }
    
    Mat inputImg;
    
    inputImg = imread("//Users/Dani/Documents/111Coding/Histogram_openCV_sample2/Histogram_openCV_sample2/award.jpeg",0);
    resize(inputImg, inputImg, Size(), SCALE, SCALE, CV_INTER_AREA);
    
    MatND histogramB, histogramG, histogramR;
    const int channel_numbersB[] = { 0 };  // Blue
    const int channel_numbersG[] = { 1 };  // Green
    const int channel_numbersR[] = { 2 };  // Red
    float channel_range[] = { 0.0, 255.0 };
    const float* channel_ranges = channel_range;
    int number_bins = 255;
    
    // R, G, B별로 각각 히스토그램을 계산한다.
    calcHist(&inputImg, 1, channel_numbersB, Mat(), histogramB, 1, &number_bins, &channel_ranges);
//    calcHist(&inputImg, 1, channel_numbersG, Mat(), histogramG, 1, &number_bins, &channel_ranges);
    
//    calcHist(&inputImg, 1, channel_numbersR, Mat(), histogramR, 1, &number_bins, &channel_ranges);
    
    // Plot the histogram
    int hist_w = 512; int hist_h = 400;
    int bin_w = cvRound((double)hist_w / number_bins);
    
    Mat histImageB(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));
    normalize(histogramB, histogramB, 0, histImageB.rows, NORM_MINMAX, -1, Mat());
    
    Mat histImageG(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));
    normalize(histogramG, histogramG, 0, histImageG.rows, NORM_MINMAX, -1, Mat());
    
    Mat histImageR(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));
    normalize(histogramR, histogramR, 0, histImageR.rows, NORM_MINMAX, -1, Mat());
    
    for (int i = 1; i < number_bins; i++)
    {
        
        line(histImageB, Point(bin_w*(i - 1), hist_h - cvRound(histogramB.at<float>(i - 1))),
             Point(bin_w*(i), hist_h - cvRound(histogramB.at<float>(i))),
             Scalar(255, 0, 0), 2, 8, 0);
        
//        line(histImageG, Point(bin_w*(i - 1), hist_h - cvRound(histogramG.at<float>(i - 1))),
//             Point(bin_w*(i), hist_h - cvRound(histogramG.at<float>(i))),
//             Scalar(0, 255, 0), 2, 8, 0);
//
//        line(histImageR, Point(bin_w*(i - 1), hist_h - cvRound(histogramR.at<float>(i - 1))),
//             Point(bin_w*(i), hist_h - cvRound(histogramR.at<float>(i))),
//             Scalar(0, 0, 255), 2, 8, 0);
//        
    }
    
    
    namedWindow("Original", CV_WINDOW_AUTOSIZE);
    namedWindow("HistogramB", CV_WINDOW_AUTOSIZE);
    namedWindow("HistogramG", CV_WINDOW_AUTOSIZE);
    namedWindow("HistogramR", CV_WINDOW_AUTOSIZE);
    
    moveWindow("Original", 100, 100);
    moveWindow("HistogramB", 110, 110);
    moveWindow("HistogramG", 120, 120);
    moveWindow("HistogramR", 130, 130);
    
    imshow("Original", inputImg);
    imshow("HistogramB", histImageB);
    imshow("HistogramG", histImageG);
    imshow("HistogramR", histImageR);
    
    waitKey(0);
    return 0;
}

*/
