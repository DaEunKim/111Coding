//
//  main.cpp
//  1918후위표기식
//
//  Created by 김다은 on 2018. 3. 9..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op){
    switch (op) {
        case '(': case ')': return 0;
        case '+': case '-': return 1;
        case '*': case '/': return 2;
    }
    return -1;
}

int main(void){
    string s;
    cin >> s;
    
    stack<char> postfix;
    while (!postfix.empty()) {
        postfix.pop();
    }
    unsigned long size = s.size();
    char c, e=' ';
    for(int i = 0;i<size;i++){
        c = s.at(i);
        if(c>='A' && c<='Z'){
            cout<< c;
        }
        else if(c=='('){
            postfix.push(c);
        }
        else if(c==')'){
            while (!postfix.empty()) {
                if(postfix.top() == '('){
                    postfix.pop();
                    break;
                }else{
                    cout<< postfix.top();
                    postfix.pop();
                }
            }
        }
        else if(c=='+' || c=='-' || c=='*' || c=='/'){
            if(!postfix.empty()){
                e = postfix.top();
            }
            else{
                e = '(';
            }
            while (!postfix.empty() && precedence(e) >= precedence(c)) {
                cout<<e;
                postfix.pop();
                if(!postfix.empty())
                    e = postfix.top();
            }
            postfix.push(c);
        }
    }
    
    while (!postfix.empty()) {
        e = postfix.top();
        cout<< e;
        postfix.pop();
    }

}
