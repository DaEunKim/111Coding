//
//  main.cpp
//  2093괄호제거
//
//  Created by 김다은 on 2019. 1. 24..
//  Copyright © 2019년 김다은. All rights reserved.
//

#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    unsigned long size = s.size();
    
    stack<char> stack;
    char arr[1001];
    for(int i = 0;i<size;i++){
        arr[i] = s.at(i);
    }
    
    char ch, prev;
    for(int i = 0;i<size;i++){
        ch = arr[i];
        if(ch>='a' && ch<='z')
            cout<<ch;
        
        else if(ch=='('){
            stack.push(arr[i]);
        }
        else if(ch==')'){
            while(!stack.empty()){
                prev = stack.top();
                stack.pop();
                if(prev =='('){
                    break;
                }
                else{
                    cout<<prev;
                }
            }
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            while (!stack.empty()) {
                prev = stack.top();
                cout<< prev;
                stack.pop();
            }
            stack.push(ch);
        }
    }
    
    while (!stack.empty()) {
        char tmp = stack.top();
        stack.pop();
        cout<< tmp;
    }
    cout<<endl;
    
}
