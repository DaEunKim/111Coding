//
//  main.cpp
//  11723집합
//
//  Created by 김다은 on 2018. 1. 10..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    unsigned long long m;
    cin >> m;
    list<int> v;
    list<string> list_string;
    
    string s;
    int x;
    for(int i = 0;i<m;i++){
        cin >> s;
        if(s=="all"){
            v.clear();
            for(int i = 1;i<21;i++)
                v.push_back(i);
        }
        else if(s=="empty"){
            v.clear();
        }
        else{
            cin >> x;
            if(s=="add"){
                if(v.empty())
                    v.push_back(x);
                else{
                    bool flag = false;
                    
                    for(auto i = v.begin();i!=v.end();i++){
                        if(*i==x)
                            flag = true;
                    }
                    if(flag==false)
                        v.push_back(x);
                }
            }
            else if(s=="remove"){
                v.remove(x);
            }

            else{
                bool flag = true;
                if(v.empty() && s=="check"){
                    flag = false;
                }
                for(auto i = v.begin();i!=v.end();i++){
                    if(*i==x){
                        if(s=="check")
                            flag = true;
                        else
                            flag = false;
                        
                        break;
                    }
                    else{
                        if(s=="check")
                            flag = false;
                        else
                            flag = true;
                    }
                }
                if(s=="check"){
                    if(flag == true)
                        cout<< 1 <<endl;
                    else
                        cout<< 0 <<endl;
                }
                else {
                    if(flag == true)
                        v.push_back(x);
                    else
                        v.remove(x);
                }
            }
        }
        
    }
}
