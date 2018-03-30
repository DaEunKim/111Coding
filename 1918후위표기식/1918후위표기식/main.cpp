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

void print_postfix(stack<char> conn){
    stack<char> postfix;
    unsigned long size = conn.size();
    for(int i = 0;i<size;i++){
        postfix.push(conn.top());
        conn.pop();
    }
    
    unsigned long postfix_size = postfix.size();
    for(int i =0;i<postfix_size;i++){
        cout<< postfix.top();
        postfix.pop();
    }
    cout<<endl;
}


int main(void){
    string s;
    cin >> s;

    stack<char> sign;
    stack<char> alphabet;
    
    stack<char> all;
    //()일때 먼저 계산
    
//    all.push(')');
    for(int i = 0;i<s.size();i++){
        all.push(s.at(i));
    }
    unsigned long size = all.size();
    
    while (all.top()=='(') {
        if(all.top()==')'){
            break;
        }
        if(all.top()=='+' || all.top()=='*' || all.top()=='-' || all.top()=='/'){
            
        }
    }
    for(int i =0;i<size;i++){
        if(all.top()=='+' || all.top()=='*' || all.top()=='-' || all.top()=='/'){
            all.push(all.top());
            
            print_postfix(all);

        }
    }
    
//    all.push('(');
    
    
//
//    stack<char> tmp;
//    unsigned long all_size = all.size();
//    for(int i = 0;i<all_size;i++){
//        if(all.top()=='('){
//            while (all.top()!=')') {
//                all.pop();
//                tmp.push(all.top());
//            }
//        }
////        else{
////            alphabet.push(all.top());
////            all.pop();
////        }
////
//    }
//
//    unsigned long tmp_size = tmp.size();
//    for(int i = 0;i<tmp_size;i++){
//        cout<< tmp.top();
//        tmp.pop();
//    }
//    cout<<endl;
    
}
