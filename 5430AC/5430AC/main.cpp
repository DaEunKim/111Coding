//
//  main.cpp
//  5430AC
//
//  Created by 김다은 on 2017. 12. 28..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
#include <deque>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    int T; cin >> T;
    for(int z = 0;z<T;z++){
        string p;
        cin >> p;
        int n;
        scanf("%d", &n);
        char gar;
        int x[100001] = {0,};
        
        scanf("%c", &gar);
        for(int i = 0;i<=n;i++){
            scanf("%d", &x[i]);
            scanf("%c", &gar);
        }
        scanf("%c",&gar);
        
        char arr[100001];
        deque<int> q;
        deque<int> q_reverse;
        
        unsigned long long size = p.size();
        for(int i = 0;i<size;i++){
            arr[i] = p.at(i);
        }

        for(int i = 1;i<=n;i++){
            q.push_back(x[i]);
        }
        
        bool flag = true;
        bool hasError = false;
        for(int i = 0;i<size;i++){
            if(arr[i]=='R'){
                flag = !flag;
            }
            else{
                if(q.empty()){
                    hasError = true;
                    break;
                }
                else if(flag)
                    q.pop_front();
                else
                    q.pop_back();
            }
        }
        if(hasError) puts("error");
        else{
            unsigned long long size = q.size();
            if(flag){
                cout<<"[";
                for(int i = 0;i<size;i++){
                    cout<< q[i];
                    if(i!=size-1) cout<<",";
                }
                cout<< "]";
            }
            else{
                cout<<"[";
                for(unsigned long long i = size-1; i>=0; i--){
                    cout<< q[i];
                    if(i!=0) cout<<",";
                }
                cout<< "]";
            }
            puts("");
        }
    }
}

