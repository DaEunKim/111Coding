//
//  main.cpp
//  2565전기줄
//
//  Created by 김다은 on 2017. 7. 9..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    int A[501]={0,};
    int B[501]={0,};

    int n;
    cin >> n;
    
    vector< pair<int, int> > v;
    
    vector<int> real_v;
    
    for(int i = 0;i<n;i++){
        cin >> A[i] >> B[i];
    }
    
    for(int i = 0;i<n;i++)
        v.push_back(make_pair(A[i], B[i]));
    
    sort(v.begin(), v.end());
    
    for(int i = 0;i<n;i++){
        auto loc = lower_bound(real_v.begin(), real_v.end(), v[i].second);
        
        if (loc == real_v.end()){
            real_v.push_back(v[i].second);
        }
        else{
            *loc = v[i].second;
        }
    }
    
    cout<< n-real_v.size()<<endl;
    
    
}
