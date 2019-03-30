//
//  main.cpp
//  10818최소최대
//
//  Created by 김다은 on 2017. 8. 4..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;


int main(void){
    int N;
    scanf("%d", &N);
    
    int val[1000001] = {0, };
    for(int i = 0;i<N;i++){
        scanf("%d", &val[i]);
    }
    
    int min = 20135179;
    int max = -20135179;
    
    for(int i = 0;i<N;i++){
        if(val[i] < min)
            min = val[i];
        if(val[i] > max)
            max = val[i];
            
    }
    printf("%d %d\n", min, max);
    
}
