//
//  main.cpp
//  14495피보나치비스무리
//
//  Created by 김다은 on 2017. 4. 27..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    unsigned long long tmp[120] = {0, };
    tmp[1] = 1;
    tmp[2] = 1;
    tmp[3] = 1;
    
    for(int i = 4;i<=n;i++){
        tmp[i] = tmp[i-1]+tmp[i-3];
    }
    cout<<tmp[n] <<endl;
    
    
    
}
