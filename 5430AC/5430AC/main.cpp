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
#include <queue>
#include <cstdio>
using namespace std;

int x[1000001] = {0,};

int main(void){
//    ios::sync_with_stdio(false);
    int T; cin >> T;
    for(int z = 0;z<T;z++){
        string p;//RDD
        cin >> p;
        int n;
        scanf("%d", &n);//4
        char gar;//[ , ]
        
        scanf("%c", &gar);
        for(int i = 0;i<=n;i++){
            scanf("%d", &x[i]);
            scanf("%c", &gar);
        }
        scanf("%c",&gar);
        
        char arr[100002];
        deque<int> q;
        
        unsigned long long string_size = p.size();
        for(int i = 0;i<string_size;i++){
            arr[i] = p.at(i);
        }

        for(int i = 1;i<=n;i++){
            q.push_back(x[i]);
        }
        
        bool flag = true;
        bool hasError = false;
        for(int i = 0;i<string_size;i++){
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
            int size = q.size();
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
                for(int i = size-1; i>=0; i--){
                    cout<< q[i];
                    if(i!=0) cout<<",";
                }
                cout<< "]";
            }
            puts("");
        }
    }
}

