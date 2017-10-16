//
//  main.cpp
//  4948베르트랑공준
//
//  Created by 김다은 on 2017. 10. 2..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPrime(int num){
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main(void){
    int n;
    while (1) {
        cin >> n;
        if(n==0)
            break;
        int cnt = 0;
        
        for(int i = n+1;i<=2*n;i++){
            if(isPrime(i)==true){
                cnt++;
            }
        }
        
        cout<< cnt<<endl;
        
    }
    
}
