//
//  main.cpp
//  1920수찾기
//
//  Created by 김다은 on 2018. 1. 2..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;



int main(void){
    ios::sync_with_stdio(false);

    vector<long long> comparison;
    
    int N;
    cin >> N;
    
    long long arr[100001] = {0,};
    for(int i = 0;i<N;i++){
        cin >> arr[i];
        comparison.push_back(arr[i]);
    }
    
    vector<long long> target;

    int M;
    cin >> M;
    long long find_arr[100001] = {0,};
    for(int i = 0;i<M;i++){
        cin >> find_arr[i];
        target.push_back(find_arr[i]);
    }
    for(vector<long long>::iterator i = target.begin(); i!= target.end(); i++){
        if(binary_search(comparison.begin(), comparison.end(), *i)){
            cout<< 1 <<endl;
        }
        else{
            cout<< 0 <<endl;
        }
    }

}
