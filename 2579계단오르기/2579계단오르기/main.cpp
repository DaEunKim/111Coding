//
//  main.cpp
//  2579계단오르기
//
//  Created by 김다은 on 2018. 1. 24..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int arr[10001] = {0,};

int dp(int index, int n){
    int max = 0;
    if(index == 1)
        return arr[index];
    if(index==2)
        return arr[index];
    if(index>max){
        max = index;
        
    }
    max += dp(index, n) + dp(index+1, n);
    max += dp(max, n-1);
    
    return max;
}

int main(void){
    int n;
    cin >> n;
    int stairs[10001] = {0, };
    for(int i = 0;i<n;i++){
        cin >> stairs[i];
    }
    
}
