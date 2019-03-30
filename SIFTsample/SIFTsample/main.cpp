//
//  main.cpp
//  SIFTsample
//
//  Created by 김다은 on 2017. 4. 15..
//  Copyright © 2017년 김다은. All rights reserved.
//
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <vector>
#include <string>
#include <cmath>
#include <opencv2/features2d.hpp> //Thanks to Alessandro
using namespace std;
using namespace cv;

int main(void)
{
    Mat input = imread('Users/Dani/Documents/111Coding/SIFTsample/SIFTsample/hanul.jpg'); //Load as grayscale
    input.convertTo(input, CV_32F, 1/255.0);
    
    // Calculate gradients gx, gy
    Mat gx, gy;
    Sobel(input, gx, CV_32F, 1, 0, 1);
    Sobel(input, gy, CV_32F, 0, 1, 1);
    
    Mat mag, angle;
    cartToPolar(gx, gy, mag, angle, 1);
    
    
}
