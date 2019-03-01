//
//  main.cpp
//  9012괄호_re
//
//  Created by 김다은 on 2018. 12. 18..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    
    string s;
    char arr[50];
    for(int i = 0;i<T;i++){
        cin >> s;
        
        memset(arr, 0, sizeof(arr));
        
        unsigned long s_size = s.size();
        for(int j = 0;j<s_size;j++){
            arr[j] = s.at(j);
        }
        stack<char> vps;
        bool flag = true;
        for(int j = 0;j<s_size;j++){
            char ch = arr[j];
            if(ch=='('){
                vps.push(ch);
            }
            else if(ch==')'){
                if(vps.empty()){
                    flag = false;
                    break;
                }
                else{
                    char prev = vps.top();
                    vps.pop();
                    if(ch==')' && prev == '(')
                        flag = true;
                    else
                        flag = false;
                }
            }
            
        }
        
        if(vps.empty() && flag == true)
            cout<< "YES" <<endl;
        else
            cout<< "NO" <<endl;
        
    }
}
