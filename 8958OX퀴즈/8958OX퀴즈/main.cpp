//
//  main.cpp
//  8958OX퀴즈
//
//  Created by 김다은 on 2017. 4. 13..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void){
    int T;
    cin >> T;
    
    for(int i = 0;i<T;i++){
        string c;
        cin >> c;
        int sum = 0;
        char check[81]={0,};
        int cnt = 0;
        for(int i = 0;i<c.size();i++){
            check[i] = c.at(i);
        }
        
        for(int i = 0;i<c.size();i++){
            if(check[i]=='O')
                sum += ++cnt;
            else if(check[i]=='X'){
                cnt = 0;
            }
        }
        cout<< sum<<endl;
    }
    
}
