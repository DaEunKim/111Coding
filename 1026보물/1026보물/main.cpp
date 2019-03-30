//
//  main.cpp
//  1026보물
//
//  Created by 김다은 on 2017. 3. 29..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;


int main(void){
    int N;
    cin >> N;
    int A[50] = {0, };
    int B[50] = {0, };
    int S[50] = {0, };
    int sum = 0;
    
    for(int i = 0;i<N;i++)
        cin >>A[i];
    for(int i = 0;i<N;i++)
        cin >>B[i];
    
    sort(A,A+N);
    sort(B, B+N, greater<int>());
    
    for(int i = 0;i<N;i++){
        S[i] = A[i]*B[i];
        sum+=S[i];
        
    }
    cout<< sum <<endl;

    
}
