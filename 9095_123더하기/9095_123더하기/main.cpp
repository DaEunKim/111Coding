//
//  main.cpp
//  9095_123더하기
//
//  Created by 김다은 on 2018. 1. 23..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int arr[1001]={0,};
int dp(int a){
    if(a==1)
        return 1;
    if(a==2)
        return 2;
    if(a==3)
        return 4;
    if(arr[a]>0)
        return arr[a];
    arr[a] = dp(a-1)+dp(a-2)+dp(a-3);
    return arr[a];
}

int main(void){
    int n;
    cin >> n;
    for(int z = 0;z<n;z++){
        int TestCase;
        cin >> TestCase;
        cout<< dp(TestCase)<<endl;
    }
}
