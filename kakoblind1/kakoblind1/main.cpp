//
//  main.cpp
//  kakoblind1
//
//  Created by 김다은 on 2017. 9. 16..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(void){
    
    string dart = "2D3T";
    char a[100];
    unsigned long k = dart.length();
    for(int i = 0;i<k;i++){
        a[i] = dart.back();
        dart.pop_back();
    }
    for(int i = 0;i<k;i++){
        cout<< a[i]<< " ";
    }cout<<endl;
    
    
}











