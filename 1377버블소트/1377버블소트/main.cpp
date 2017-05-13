//
//  main.cpp
//  1377버블소트
//
//  Created by 김다은 on 2017. 5. 13..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int A[500001]={0, };
    int i,j;
    int change;
    for(i = 1;i<=N;i++){
        cin >> A[i];
    }
    sort(A+0, A+N+1);
    
    for(i = 1;i<=N;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    
    for (i=1; i<=N; i++){
        change = 0;
        for (j=1; j<=N-i; j++){
            change = 1;
        }
        if (change == 0) {
            break;
        }
    }
    printf("%d\n",i);
}
