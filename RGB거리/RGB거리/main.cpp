//
//  main.cpp
//  RGB거리
//
//  Created by 김다은 on 2017. 2. 22..
//  Copyright © 2017년 김다은. All rights reserved.
//RGB거리

#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    int N;
    scanf("%d", &N);
    //int house[1001];
    
    int red[1001];
    int green[1001];
    int blue[1001];
    int sum=0;
    int min = 20135179;
    
    for(int i = 0;i<N;i++){
        scanf("%d", &red[i]);
        scanf("%d", &green[i]);
        scanf("%d", &blue[i]);
        printf("%d %d %d\n", red[i], green[i], blue[i]);
    }
    
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            for(int k = 0;k<N;k++){
                sum = red[k] + green[j] + blue[i];
                
                if(min>sum){
                    min = sum;
                }
            }
        }
    }
    printf("%d\n", min);


}
