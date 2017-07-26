//
//  main.cpp
//  1080행렬
//
//  Created by 김다은 on 2017. 7. 26..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

void change3by3(int A[][51], int x, int y){
    for(int i = y; i<y+3; i++){
        for(int j = x; j<x+3; j++){
            if(A[i][j]==0){
                A[i][j]=1;
            }
            else{
                A[i][j]=0;
            }
        }
    }
}

int main(void){
    int N, M;
    cin >> N >> M;
    char ch;
    
    int A[51][51]={0,};
    int B[51][51]={0,};
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin >> ch;
            A[i][j] = ch-'0';
        }
    }
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin >> ch;
            B[i][j] = ch-'0';
        }
    }
    
    int cnt = 0;

    for(int i = 0;i<N-2;i++){
        for(int j = 0;j<M-2;j++){
            if(A[i][j] != B[i][j]){
                change3by3(A, j, i);
                cnt++;
            }
        }
    }
    
    bool flag = true;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            if(A[i][j]!=B[i][j]){
                flag = false;
                break;
            }
        }
    }
    if(flag == true)
        cout<<cnt<<endl;
    else
        cout<< "-1"<<endl;
}

