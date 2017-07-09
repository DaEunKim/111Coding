//
//  main.cpp
//  11722가장긴감소하는부분수열
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
    
    vector<int> v;
    
    for(int i = 0;i<n;i++){
        cin >> A[i];
    }
    v.push_back(A[n-1]);
    
    
    for(int i = n-2;i>=0;i--){
        auto loc = lower_bound(v.begin(), v.end(), A[i]);
        if (loc == v.end()){
            v.push_back(A[i]);
        }
        else{
            *loc = A[i];
        }
    }
    
    cout<<v.size()<<endl;
    
    
}
