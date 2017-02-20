//
//  main.cpp
//  조세퍼스문제
//
//  Created by 김다은 on 2017. 2. 15..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main(void){
    int N; //사람 수
    int M; //M번째 수
    scanf("%d %d", &N, &M);
    //int arr[] ={0, };
    queue<int> qu;
    for(int i = 1;i<=N;i++){
        qu.push(i);
    }
    printf("<");
    while (!qu.empty()) {
        for(int i = 1;i<M;i++){
            qu.push(qu.front());
            qu.pop();
        }
        
        if(qu.size()!=1){
            printf("%d, ", qu.front());
        }
        else
            printf("%d", qu.front());
        qu.pop();
    }
    printf(">");
}
