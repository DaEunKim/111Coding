//
//  main.cpp
//  1748수이어쓰기1
//
//  Created by 김다은 on 2017. 10. 24..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int length(int n){
    int cnt = 0;
    while (n!=0) {
        cnt++;
        n= n/10;
    }
    return cnt;
    
}


int main(void){
    int n;
    cin >> n;
    int cnt = 0;
    
    for(int i = 1;i<=n;i++){
        cnt += length(i);
    }

    cout<< cnt<<endl;
    
}
