//
//  main.cpp
//  2193이친수
//
//  Created by 김다은 on 2017. 8. 7..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    
    long long zero_cnt = 0;
    long long one_cnt = 1;
    
    long long sum = 0;
    
    while (n!=0) {
        sum = zero_cnt + one_cnt;
        one_cnt = zero_cnt;
        zero_cnt = sum;
        n--;
    }
    cout<< zero_cnt<<endl;
}
