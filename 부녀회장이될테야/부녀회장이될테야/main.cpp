//
//  main.cpp
//  부녀회장이될테야
//
//  Created by 김다은 on 2017. 1. 12..
//  Copyright © 2017년 김다은. All rights reserved.
//2775번

#include <iostream>
#include <cstdio>

int main(void){
    int T;
    scanf("%d", &T);
    
    int k;
    int n;
    
    while(T--){
        scanf("%d", &k);//층
        scanf("%d", &n);//호수
        int arr[15][15]={0 ,};
        
        for(int i = 1;i<=14;i++){
            arr[0][i] = i;
        }
        
        
        for(int i = 1; i<=14;i++){
            arr[i][1] = 1;
            for(int j = 1; j<=14; j++){
                arr[i][j+1] =arr[i][j] + arr[i-1][j+1];
            }
        }
        
        printf("%d\n", arr[k][n]);
    }
}
