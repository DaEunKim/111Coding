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
    
    int size = atoi(C.c_str());

    for(int i = 0;i< size;i++)
        A = (A^B);
    
    cout << A <<endl;
    
    
}
