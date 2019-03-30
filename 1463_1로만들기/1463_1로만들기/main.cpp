//
//  main.cpp
//  1463_1로만들기
//
//  Created by 김다은 on 2017. 8. 9..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

void makeOne(int n, int count){
    while (n!=1) {
        if(n%3==0){
            n = n/3;
        }
        else if(n%2==0){
            n = n/2;
        }
        else
            n = n-1;
        count++;
    }
    
    cout << count<<endl;
}

int main(void){
    int n;
    cin >> n;
    
    int count = 0;
    
    
    makeOne(n, count);
}
