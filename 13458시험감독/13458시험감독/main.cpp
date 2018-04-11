//
//  main.cpp
//  13458시험감독
//
//  Created by 김다은 on 2018. 4. 11..
//  Copyright © 2018년 김다은. All rights reserved.
//
//  필요한 감독관 수의 최소값


#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    long long N, B, C;
    long long A[1000001]={0,};
    cin >> N;
    
    memset(A, 0, sizeof(A));
    for(int i = 0;i<N;i++){
        cin >> A[i];
    }
    cin >> B >> C; //총감독, 부감독
    
    long long cnt = 0;
    for(int i = 0;i<N;i++){
        A[i] = A[i] - B;
        cnt++;
        if(A[i]<1 || A[i] > 1000000){
            continue;
        }
        if(A[i] % C != 0){
            cnt++;
        }
        cnt += A[i]/C;
    }
    cout<< cnt <<endl;
    
    return 0;
}
