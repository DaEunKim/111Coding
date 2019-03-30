//
//  main.cpp
//  3079입국심사
//
//  Created by 김다은 on 2018. 1. 3..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int N, M;
    cin >> N >> M;
    
    long long T[100001]={0,};
    for(int i = 0 ;i<N;i++){
        cin >> T[i];
    }
    long long max = 0;
    for(int i = 0;i<N;i++){
        if(max<T[i])
            max = T[i];
    }
    long long left = 1;
    long long right = M*max;
    long long result = M*max;

    while (left<=right) {
        long long mid = (left+right)/2;
        long long total = 0;
        
        for(int i = 0;i<N;i++){
            total += mid/T[i];
        }
        if(total < M){
            left = mid+1;
        }
        else{
            if(result > mid)
                result = mid;
            right = mid-1;
        }
    }
    cout<< result<<endl;

}
