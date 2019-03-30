//
//  main.cpp
//  1408_24
//
//  Created by 김다은 on 2017. 4. 21..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

// stand == 시작
// final == 현재

int calculateTime(int total_stand, int total_final){
    int time = total_final - total_stand;
    int hour, min, sec;
    
    if(time < 0){
        time = time + 24*3600;
    }
    
    hour = time/3600;
    min = time%3600/60;
    sec = time%60;
    
    
    printf("%02d:%02d:%02d\n", hour, min, sec);
    return 0;
}

int main(void){
    string standard, finaltime;
    
    cin >> standard >> finaltime;
    char c_standard[8]={0,};
    char c_final[8]={0,};
    
    for(int i = 0;i<standard.size();i++){
        c_standard[i] = standard.at(i);
        c_final[i] = finaltime.at(i);
    }

    int num_stand[8] = {0,};
    int num_final[8] = {0,};

    for(int i = 0;i<standard.size();i++){
        num_stand[i] = (int)(c_standard[i] - '0');
        num_final[i] = (int)(c_final[i] - '0');
        
    }
    
    int hour_stand = num_stand[0]*10 + num_stand[1];
    int min_stand = num_stand[3]*10 + num_stand[4];
    int sec_stand = num_stand[6]*10 + num_stand[7];
    
    int total_stand = hour_stand*3600 + min_stand*60 + sec_stand;
    
    
    int hour_final = num_final[0]*10 + num_final[1];
    int min_final = num_final[3]*10 + num_final[4];
    int sec_final = num_final[6]*10 + num_final[7];
    
    int total_final = hour_final *3600 + min_final*60 + sec_final;
    

    calculateTime(total_stand, total_final);
    
    
    
    
}
// 네 매력에서 해어 나올수가 없구나 ~ ㅋㅋ
