//
//  main.cpp
//  5622다이얼
//
//  Created by 김다은 on 2017. 4. 21..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void){
    string s;
    cin >> s;
    
    char c[15]={0, };
    for(int i = 0;i<s.size();i++){
        c[i] = s.at(i);
    }
    int num[15] = {0};
    int sum = 0;
    
    for(int i = 0;i<s.size();i++){
        if('A'<=c[i] && c[i]<='C')
            num[i] = 2;
        if('D'<=c[i] && c[i]<='F')
            num[i] = 3;
        if('G'<=c[i] && c[i]<='I')
            num[i] = 4;
        if('J'<=c[i] && c[i]<='L')
            num[i] = 5;
        if('M'<=c[i] && c[i]<='O')
            num[i] = 6;
        if('P'<=c[i] && c[i]<='S')
            num[i] = 7;
        if('T'<=c[i] && c[i]<='V')
            num[i] = 8;
        if('W'<=c[i] && c[i]<='Z')
            num[i] = 9;
        
        sum += (num[i]+1);

    }
    cout<< sum <<endl;
    
    
    
}
