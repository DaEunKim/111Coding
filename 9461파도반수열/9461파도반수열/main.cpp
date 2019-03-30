//
//  main.cpp
//  9461파도반수열
//
//  Created by 김다은 on 2018. 1. 24..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

long long arr[102] = {1,1,1,};

long long triangle(int n){
    for(int i = 3;i<n;i++)
        arr[i] = arr[i-3] + arr[i-2];
    return arr[n-1];

}

int main(void){
    int t;
    cin >> t;
    int n;
    for(int i = 0;i<t;i++){
        cin >> n;
        cout<< triangle(n)<<endl;
    }
    
    
}
