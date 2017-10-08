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
    
    int tmp_hour = 0, tmp_min = 0, tmp_sec = 0;
    

    tmp_min = time_sec / 60;
    tmp_sec = time_sec % 60;

    while (tmp_min > 60) {

        tmp_hour = tmp_min / 60;
        tmp_min = tmp_min % 60;
    }
    
    cout<< hour+ tmp_hour << " "<< min+tmp_min <<" "<<second+tmp_sec<<endl;
    
}
