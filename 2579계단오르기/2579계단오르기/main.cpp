//
//  main.cpp
//  2579계단오르기
//
//  Created by 김다은 on 2018. 1. 24..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001] = {0,};

int func(int *score, int a){
    dp[0] = score[0];
    dp[1] = score[1];
    dp[2] = score[1]+score[2];
    
    for(int i = 3;i<=a;i++){
        dp[i] = max(dp[i-3] + score[i-1] , dp[i-2]) + score[i];
        
    }
    return dp[a];
    
}

int main(void){
    int n;
    cin >> n;
    int score[10001] = {0, };
    
    for(int i = 1;i<=n;i++){
        cin >> score[i];
    }
    cout<< func(score, n)<<endl;
    
}
