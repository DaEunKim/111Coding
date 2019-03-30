//
//  main.cpp
//  swaping
//
//  Created by 김다은 on 2018. 1. 9..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void){
    int a = 10;
    int b = 30;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<< a << " " << b <<endl;
    
    char c = 'c';
    char d = 'd';
    c = c+d;
    d = c-d;
    c = c-d;
    cout<< c << " " << d <<endl;
    
    string e = "efg";
    string f = "fgh";
    e = e+f;
//    f = e>f;
//    e = e<f;
    cout<< e<< " "<<f<<endl;
    
}
