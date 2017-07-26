//
//  main.cpp
//  10989수정렬3
//
//  Created by 김다은 on 2017. 7. 26..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    
    int N;
    scanf("%d", &N);
    
    int n;
    int a[10001]={0,};
    
    for(int i = 0;i<N;i++){
        scanf("%d", &n);
        a[n]++;
    }
    
    for(int i = 0;i<=10000;i++){
        while (a[i]!=0) {
            printf("%d\n", i);
            a[i]--;
        }
    }
}
