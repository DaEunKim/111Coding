//
//  main.cpp
//  2292벌집
//
//  Created by 김다은 on 2017. 10. 8..
//  Copyright © 2017년 김다은. All rights reserved.
//ㅇㄴㄹㅇㄹ

#include <iostream>
using namespace std;

long long seven(long long k){
    return 3*k*k - 3*k +1;
}

void Func(int n){
    for(int i = 1;i<=n;i++){
        if(seven(i) >= n){
            cout<< i <<endl;
            break;
        }
        

    }

}
int main(void){
    int n;
    cin >> n;
    Func(n);
}
