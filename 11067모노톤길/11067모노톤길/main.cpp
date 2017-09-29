//
//  main.cpp
//  11067모노톤길
//
//  Created by 김다은 on 2017. 9. 29..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void swap(int &a, int&b) {
    int tmp = a;
    a = b;
    b = tmp;
}

bool check(vector<pair<unsigned int, int>> v){
    unsigned long size = v.size();
    bool flag = true;
    for(int i = 0;i<size;i++){
        if(v[i].first==0 && v[i].second==0){
            if(v[i-1].first==1){
                flag = false;
            }
        }
    }
    return flag;
}

void monotongil(vector<pair<unsigned int, int>> v, int t){
    
    for(int i = 0;i<t;i++){
        if(v[i].second<0 && v[i].second <= v[i+1].second){
            if(check(v)==true){
                swap(v[i], v[i+1]);
                
            }
        }
    }

}

int main(void){
    int T;
    cin >> T;
    int t;
    for(int z = 0;z<T;z++){
        vector<pair<unsigned int, int>> v;
        cin >> t;
        for(int i = 0;i<t;i++){
            unsigned int x;
            int y;
            cin >> x >> y;
            v.emplace_back(make_pair(x, y));
        }
        
        sort(v.begin(), v.end());
        
        monotongil(v, t);
        
        int M;
        cin >> M;
        int m[M+1];
        for(int i = 0; i<M; i++){
            cin >> m[i];
        }

        for(int i = 0; i<M; i++){
            for(int j = 0;j<t;j++){
                if(m[i]-1==j){
                    cout<< v[j].first <<" "<< v[j].second<<endl;
                }
            }
        }
        
    }
}
