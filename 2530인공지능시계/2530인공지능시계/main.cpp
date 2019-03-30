//
//  main.cpp
//  2530인공지능시계
//
//  Created by 김다은 on 2017. 10. 7..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int hour, min, second;
    cin >> hour >> min >> second;
    int time_sec;
    cin >> time_sec;
    
    int tmp_sec = 0;
    
    tmp_sec =  second + time_sec;

    if(tmp_sec >= 60){
        min = min + tmp_sec / 60;
        tmp_sec = tmp_sec % 60;

    }

    if(min >= 60){
        hour = hour + min / 60;
        min = min % 60;

    }

    if(hour >= 24){
        hour = hour % 24;

    }
    

    cout<< hour << " " << min <<" "<<tmp_sec<<endl;
    
}
