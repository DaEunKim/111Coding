//
//  main.cpp
//  11582치킨TOPN
//
//  Created by 김다은 on 2017. 9. 21..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int n;
    cin >> n;
    
    vector<int> v;

    
    for(int i = 0;i<n;i++){
        int value;
        cin >> value;
        v.emplace_back(value);
        
    }
    int k;
    cin >> k;
    

    sort(v.begin(), v.begin()+n/k);
    sort(v.begin()+n/k, v.end());
    
    for(auto i : v)
        cout<< i <<" ";
    cout<< endl;
}
