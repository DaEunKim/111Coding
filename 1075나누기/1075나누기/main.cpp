//
//  main.cpp
//  1075나누기
//
//  Created by 김다은 on 2017. 6. 24..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
    int N;
    int F;
    cin >> N >> F;
    
    int n = (N/100)*100;
    
    int cnt = 0;
    int tmp = n;
    
    while (tmp%F!=0) {
        tmp++;
        cnt++;
    }
    int ans = (n+cnt)%100;
    
    if(ans/10==0)
        printf("0%d\n", ans);
    else
        printf("%d\n", ans);
}
