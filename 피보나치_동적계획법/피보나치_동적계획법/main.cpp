//
//  main.cpp
//  피보나치_동적계획법
//
//  Created by 김다은 on 2017. 2. 20..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int one;
int zero;

void fibonacci(int n){
    if(n==0){
        zero++;
    }
    else if(n==1){
        one++;
    }
    else{
        fibonacci(n-1);
        fibonacci(n-2);
    }

}

int main(void){
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        one = 0; zero = 0;
        fibonacci(N);
        printf("%d %d\n", zero, one);
    }
    
}
