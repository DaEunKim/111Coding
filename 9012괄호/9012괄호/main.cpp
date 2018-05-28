//
//  main.cpp
//  9012괄호
//
//  Created by 김다은 on 2018. 5. 28..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    bool flag;
    string s;
    stack<char> VPS;

    for(int z = 0;z<T;z++){
        while(!VPS.empty())
            VPS.pop();
        flag = true;
        cin >> s;
        unsigned long size = s.size();
        char c;
        for(int i = 0;i<size;i++){
            c = s.at(i);
            if(c =='('){
                VPS.push(c);
            }
            else if(c==')'){
                if(VPS.empty()){
                    flag = false;
                    break;
                }
                else
                    VPS.pop();
            }
        }
        
        if(flag == true && VPS.empty())
            cout<< "YES"<<endl;
        else
            cout<< "NO"<<endl;
    }
    
}
