//
//  main.cpp
//  sortingSTL
//
//  Created by 김다은 on 2017. 1. 12..
//  Copyright © 2017년 김다은. All rights reserved.
//2751번


#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    scanf("%d", &N);
    int arr[1000000];
    
    for(int i = 0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+N);
    for(int i = 0;i<N;i++){
        printf("%d\n", arr[i]);
    }
    
    
}
