//
//  main.cpp
//  1149RGB거리
//
//  Created by 김다은 on 2018. 1. 20..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int min(int a, int b){
    if(a>b)
        return b;
    return a;
}

int main(void){
    int n;
    cin >> n;
    int R=0, G=1, B=2;
    int arr[3][1001] = {0,};
    cin >> arr[R][0];
    cin >> arr[G][0];
    cin >> arr[B][0];
    int r, g, b;
    for(int i = 1;i<n;i++){
        cin >> r>>g>>b;
        arr[R][i] = r + min(arr[G][i-1], arr[B][i-1]);
        arr[G][i] = g + min(arr[R][i-1], arr[B][i-1]);
        arr[B][i] = b + min(arr[R][i-1], arr[G][i-1]);
    }
    int result;
    result = min(min(arr[R][n-1], arr[G][n-1]), arr[B][n-1]);
    
    cout<< result<<endl;
}
