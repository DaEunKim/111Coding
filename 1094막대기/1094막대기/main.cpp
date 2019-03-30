//
//  main.cpp
//  1094막대기
//
//  Created by 김다은 on 2017. 7. 20..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int X; cin >> X;
    
    int stick = 64;
    int cnt = 1;
    int min_stick = 0;

    min_stick = stick;
    
    while (stick!=X) {
        min_stick = min_stick/2;
        if(stick - min_stick >=X){
            stick -= min_stick;
        }
        else{
            cnt++;
        }
    }
    cout<< cnt<<endl;
}
