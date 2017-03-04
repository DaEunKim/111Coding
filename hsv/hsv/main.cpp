//
//  main.cpp
//  hsv
//
//  Created by 김다은 on 2017. 3. 4..
//  Copyright © 2017년 김다은. All rights reserved.
//
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
    
    Mat src = imread("/Users/Dani/Desktop/photo/hanul.jpg",1);
    
    if(src.empty())
        cerr << "Error: Loading image" << endl;
    Mat hsi(src.rows, src.cols, src.type());
    
    float r, g, b, h = 0, s, in;
    
    for(int i = 0; i < src.rows; i++)
    {
        for(int j = 0; j < src.cols; j++)
        {
            b = src.at<Vec3b>(i, j)[0];
            g = src.at<Vec3b>(i, j)[1];
            r = src.at<Vec3b>(i, j)[2];
            
            in = (b + g + r) / 3;
            
            int min_val = 0;
            min_val = std::min(r, std::min(b,g));
            
            s = 1 - 3*(min_val/(b + g + r));
            if(s < 0.00001)
            {
                s = 0;
            }else if(s > 0.99999){
                s = 1;
            }
            
            if(s != 0)
            {
                h = 0.5 * ((r - g) + (r - b)) / sqrt(((r - g)*(r - g)) + ((r - b)*(g - b)));
                h = acos(h);
                
                if(b <= g)
                {
                    h = h;
                } else{
                    h = ((360 * 3.14159265) / 180.0) - h;
                }
            }
            
            hsi.at<Vec3b>(i, j)[0] = (h * 180) / 3.14159265;
            hsi.at<Vec3b>(i, j)[1] = s*100;
            hsi.at<Vec3b>(i, j)[2] = in;
        }
    }
    
    namedWindow("RGB image", CV_WINDOW_AUTOSIZE);
    namedWindow("HSI image", CV_WINDOW_AUTOSIZE);
    
    imshow("RGB image", src);
    imshow("HSI image", hsi);
    
    waitKey(0);
    return 0;
}




