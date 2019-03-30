//
//  main.cpp
//  13904과제
//
//  Created by 김다은 on 2017. 3. 28..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(void){
    int T;
    cin >> T;
    int save[101]={0, };
    int d[1001]={0, };
    int w[101]={0, };
    int sum =0;
    
    vector<pair<int, int>> v;
    
    for(int i = 0;i<T;i++){
        cin >> d[i] >> w[i];
        v.push_back(make_pair(d[i], w[i]));
        
    }
    sort(v.begin(), v.end());
    
    
    for(int i = 0;i<T;i++){
        cout<< v[i].first<<" "<<v[i].second <<endl;
    }
    
    for(int i = T;i>1;i--){
        if(v[i].first >v[i-1].first){
            save[i] = v[i].second;
        }
    }
    
   
    for(int i = 0;i<T;i++){
        sum +=save[i];
    }
    cout<< sum <<endl;
}
