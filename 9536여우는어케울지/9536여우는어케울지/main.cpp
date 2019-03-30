//
//  main.cpp
//  9536여우는어케울지
//
//  Created by 김다은 on 2017. 4. 27..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(void){
    int T;
    cin >> T;
    
    string s;
    cin >> s;
    char c[101]={0, };
    for(int i = 0;i<s.size();i++){
        getline(cin,s);
        cout<< s <<endl;

    }
    for(int i = 0;i<s.size();i++){
        strcpy(c, s.c_str());
        printf("%s", c);
    }
        

}
