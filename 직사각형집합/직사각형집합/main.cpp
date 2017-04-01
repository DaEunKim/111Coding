//
//  main.cpp
//  직사각형집합
//
//  Created by 김다은 on 2017. 1. 18..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>

int main(void){
    int T;
    scanf("%d", &T);
    int a, b, c;
    c = sqrt(a*a + b*b);
    int triple =0;
    int count = 0;
    
    for(int i= 0;i<T;i++){
        int L;
        scanf("%d", &L);
        for(int j = 0;j<14;j++){
            L = L-triple;
            triple += 2*(a+b);
        
            if(triple<=L){
                count++;
            }
        }
        printf("L : %d\n", L);
        printf("%d\n", count);
        
        

    }

    
}
