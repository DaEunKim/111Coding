//
//  main.cpp
//  달팽이는올라가고싶다
//
//  Created by 김다은 on 2017. 2. 16..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    int count = 0;
    
    while(V > 0){
        if(V<=A){
            count++;
            break;
        }
        V = V-A+B;
        count++;
        
    }
    printf("%d\n", count);
}
