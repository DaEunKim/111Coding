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

void print(deque<int> q);

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
        
        unsigned long long size = p.size();
        for(int i = 0;i<size;i++){
            arr[i] = p.at(i);
        }

        for(int i = 1;i<=n;i++){
            q.push_back(x[i]);
        }
        
        for(int i = 0;i<size;i++){
            if(arr[i]=='R'){
                if(!q.empty())
                    reverse(q.begin(), q.end());
            }
            else if(arr[i]=='D'){
                if(!q.empty())
                    q.pop_front();
            }
        }
//        print(q);
    }
}

void print(deque<int> q){
    unsigned long long q_size = q.size();
    if(!q.empty())
        printf("[");
    else{
        printf("error\n");
        return;
    }
    for(int i = 0;i<q_size;i++){
        if(q.front()!=' '){
            printf("%d",q.front());
            q.pop_front();
            if(q.empty()){
                printf("]\n");
                break;
            }
            else
                printf(",");
        }
    }
}
