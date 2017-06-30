//
//  main.cpp
//  14623감정이입
//
//  Created by 김다은 on 2017. 6. 30..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int times(int n){
    int sum = 1;
    for(int i = 0;i<n;i++){
        sum *= 10;
    }
    return sum;
}

int main(void){
    string B1;
    char B2[31];
    cin >> B1;
    cin >>B2;
    
    int sum = 0;
    string sum_string ;
    for(int i = 0;i<sizeof(B2);i++){
        sum = (sum * times(i+1)) + (atoi(B1.c_str()) * atoi(&B2[sizeof(B2)-i-1]));
    }
    
    cout<< to_string(sum)<<endl;
}
