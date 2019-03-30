//
//  main.cpp
//  10798세로읽기
//
//  Created by 김다은 on 2017. 5. 1..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

char c[16][16];

int main(void){
    
    string s[16];
    
    
    cin >> s[0];
    cin >> s[1];
    cin >> s[2];
    cin >> s[3];
    cin >> s[4];
    unsigned long max=0;
    
    
    for(int i = 0;i<5;i++){
        if(max < s[i].size())
            max = s[i].size();
    }
    
    for(int i = 0;i<5;i++){
        for(int j = 0;j<s[i].size();j++){
            c[i][j] = s[i].at(j);
        }
    }
    
    for(int i = 0;i<max;i++){
        for(int j = 0;j<5;j++){
            if(c[j][i]!=NULL)
                cout<<c[j][i];
        }
        
    }
}
