//
//  main.cpp
//  5397키로거
//
//  Created by 김다은 on 2017. 12. 26..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void){
    int n;
    cin >> n;
    
    string s;
    stack<char> st_left;
    stack<char> st_right;
    
    for(int i = 0;i<n;i++){
        cin >> s;
        unsigned long size = s.size();
        for(int j = 0;j<size;j++){
            if(s.at(j)=='<'){
                if(!st_left.empty()){
                    st_right.push(st_left.top());
                    st_left.pop();
                }
                else
                    continue;
            }
            else if(s.at(j)=='>'){
                if(!st_right.empty()){
                    st_left.push(st_right.top());
                    st_right.pop();
                }
                else
                    continue;
            }
            else if(s.at(j)=='-'){
                if(!st_left.empty())
                    st_left.pop();
                else
                    continue;
            }
            else
                st_left.push(s.at(j));
        }
        unsigned long size_l = st_left.size();
        for(unsigned long j = 0;j<size_l;j++){
            st_right.push(st_left.top());
            st_left.pop();
        }

        unsigned long size_r = st_right.size();
        for(unsigned long j = 0;j<size_r;j++){
            cout<< st_right.top();
            st_right.pop();
        }
        cout<<endl;
    }
    
}
