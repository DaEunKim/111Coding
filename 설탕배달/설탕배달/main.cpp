//
//  main.cpp
//  설탕배달
//
//  Created by 김다은 on 2017. 1. 17..
//  Copyright © 2017년 김다은. All rights reserved.
//2839번 설탕배달

#include <iostream>
#include <cstdio>

int main(void){
    int N;
    scanf("%d", &N);
    if(N==1||N==2||N==4||N==7){
        printf("-1");
    }
    else{
        if(N%5==0)  printf("%d", (N/5));
        if(N%5==1)  printf("%d", (N/5)+1);
        if(N%5==2)  printf("%d", (N/5)+2);
        if(N%5==3)  printf("%d", (N/5)+1);
        if(N%5==4)  printf("%d", (N/5)+2);
    }
    
}
