//
//  main.cpp
//  11054가장긴바이토닉부분수열
//
//  Created by 김다은 on 2017. 7. 9..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    int A[1002]={0,};
    int n;
    cin >> n;
    
    
    for(int i = 0;i<n;i++){
        cin >> A[i];
    }
    
    vector<int> v;
    v.push_back(A[0]);
    
    for(int i = 1;i<n;i++){
        auto loc = lower_bound(v.begin(), v.end(), A[i]);
        if (loc == v.end()){
            v.push_back(A[i]);
        }
        else{
            *loc = A[i];
        }
    }
    
    for(auto i = v.begin();i!=v.end();i++)
        cout<< *i<<" ";
    cout<<endl;

    
    
    
    vector<int> v2;
    v2.push_back(A[n-1]);
    
    for(int i = n-2; i >= 0; i--){
        auto loc = lower_bound(v2.begin(), v2.end(), A[i]);
        if (loc == v2.end()){
            v2.push_back(A[i]);
        }
        else{
            *loc = A[i];
        }
    }
    for(auto i = v2.begin();i!=v2.end();i++)
        cout<< *i<<" ";
    cout<<endl;

    
    cout<<v.size()<<endl;
    cout<< v2.size()<<endl;
    
}

