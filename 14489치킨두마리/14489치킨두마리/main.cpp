//
//  main.cpp
//  14489치킨두마리
//
//  Created by 김다은 on 2017. 4. 21..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int a, b;
    cin >> a>> b;
    int cost;
    cin >>cost;
    cost = cost*2;
    int result = 0;
    
    if(a+b >= cost)
        result = (a+b) - cost;
    else
        result = a+b;
    
    cout<< result <<endl;
    
}
