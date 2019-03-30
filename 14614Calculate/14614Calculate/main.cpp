//
//  main.cpp
//  14614Calculate
//
//  Created by 김다은 on 2017. 6. 27..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void){
    int A, B;
    string C;
    cin >> A >> B>> C;
    
    if(atoi(&C.back())%2!=0){
        A = (A^B);
    }
    
    cout << A <<endl;
    
    
}
