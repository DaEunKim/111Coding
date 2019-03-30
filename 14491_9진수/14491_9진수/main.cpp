//
//  main.cpp
//  14491_9진수
//
//  Created by 김다은 on 2017. 4. 21..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int rest[10001]={0, };

    int i=0;
    
    while(1){
        if(n==0)
            break;
        
        rest[i] = n%9;
        n = n/9;
        i++;
        
    }
    for(int j = i-1;j>=0;j--){
        cout<<rest[j];
    }
    
}
