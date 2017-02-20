//
//  main.cpp
//  더하기싸이클
//
//  Created by 김다은 on 2017. 2. 20..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    int N;
    scanf("%d", &N);
    int n = N;
    
    int div= 0;
    int rest = 0;
    int sum = 0;
    int result=-1;
    
    int count = 0;
    
    if(N>=0 && N<=99){
        while(N!=result){
            div = n/10;
            rest = n%10;
            sum = div+rest;
            result = rest*10+sum%10;
            n = result;
            count++;
        }
    }
    printf("%d", count);
}
