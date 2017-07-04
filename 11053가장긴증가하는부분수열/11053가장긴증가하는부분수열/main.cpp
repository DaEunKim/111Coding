//
//  main.cpp
//  11053가장긴증가하는부분수열
//
//  Created by 김다은 on 2017. 7. 4..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(void){
    int A[1002]={0,};
    int n;
    cin >> n;
    set<int> s;

    for(int i = 0;i<n;i++){
        cin >> A[i];
    }
    sort(A, A+n);
    for(int i = 0;i<n;i++){
        s.insert(A[i]);
    }
    
    int cnt = 0;
    for(std::set<int>::iterator i = s.begin(); i != s.end();i++){
//         cout<< *i<<endl;
        if(*i < *i+1)
            cnt++;
    }
    cout<<cnt<<endl;
    
    
    
}
