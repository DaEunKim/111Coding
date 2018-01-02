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
#include <algorithm>
using namespace std;

void print(deque<char> q){
    unsigned long long q_size = q.size();
    if(!q.empty())
        cout<< "[";

    for(int i = 0;i<q_size;i++){
        if(q.front()!=' '){
            
            cout<< q.front();
            q.pop_front();
            if(q.empty()){
                cout<< "]"<<endl;
                break;
            }
            else{
                cout<< ",";
            }
        }
        if(q.empty()){
            cout<< "error"<<endl;
            break;
        }
    }

}


int main(void){
    int T; cin >> T;
    for(int z = 0;z<T;z++){
        string p; cin >> p;
        int n; cin >> n;
        string x; cin >> x;
        
        char arr[100001];
        char arr_x[100001];
        
        deque<char> q;

        unsigned long long size = p.size();
        for(int i = 0;i<size;i++){
            arr[i] = p.at(i);
        }
        unsigned long long size_x = x.size();
        for(int i = 0;i<size_x;i++){
            arr_x[i] = x.at(i);
        }

        for(int i = 0;i<size_x;i++){
            if(arr_x[i] != '[' && arr_x[i] != ']' && arr_x[i] != ','){
                q.push_back(arr_x[i]);
            }
        }

        for(int i = 0;i<size;i++){
            if(arr[i]=='R'){
                reverse(q.begin(), q.end());
            }
            else if(arr[i]=='D'){
                q.pop_front();
            }
        }
        print(q);
        
    }
    
}
