//
//  main.cpp
//  14425문자열집합
//
//  Created by 김다은 on 2017. 5. 11..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(void){
    unsigned int N, M;
    scanf("%d %d", &N, &M);
    string set[501];
    string check[501];
    
    for(int i = 0;i<N;i++){
        cin >> set[i];
    }
    for(int i = 0;i<M;i++){
        cin >> check[i];
    }
    
    int count = 0;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            if(set[i]==check[j])
                count++;
        }
    }
    printf("%d\n", count);
}

