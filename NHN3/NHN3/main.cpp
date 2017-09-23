//
//  main.cpp
//  NHN3
//
//  Created by 김다은 on 2017. 9. 23..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool check(queue<int> q, int k){
    int a = q.front();
    q.pop();
    int b = q.front();
    q.pop();
    int c = q.front();
    q.pop();
    q.push(a);
    q.push(b);
    q.push(c);
    if(a!=k && b!=k && c!=k)
        return true;
    return false;
    
}

void swap(queue<int> q) {
    int tmp = q.front();
    q.pop();
    q.push(tmp);
}

int main(void){
    vector<int> v;
    int k;
    queue<int> q;
    
    for(int i = 0;i<9;i++){
        cin >> k;
        
        q.push(k);
        
        if(q.size()==4 && check(q, k)==true){
            v.emplace_back(q.front());
            q.pop();
        }
        if(q.front()==k){
            swap(q);
            
        }
        
    }
    if(v.size()==0)
        cout<< 0 <<endl;
    else{
        for(auto i : v){
            cout<< i <<endl;
        }
    }
}
