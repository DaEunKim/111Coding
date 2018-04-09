//
//  main.cpp
//  S_숫자만들기
//
//  Created by 김다은 on 2018. 3. 27..
//  Copyright © 2018년 김다은. All rights reserved.
//
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n;
int vis[101];
int opt[101];
int numbers[101]= {0, };
int max_value = -1000000000;
int min_value = 1000000000;

void dfs(int cur, int idx, int num, int size);

int main(int argc, const char * argv[]) {
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> numbers[i];
    }
    int idx = 0;
    for(int i = 0;i<4;i++){
        int cnt;
        cin >> cnt;
        for(int j = 0;j<cnt;j++){
            opt[idx++] = i+1;
        }
    }
    
    dfs(0, 1, numbers[0], 0);
    cout<< max_value <<endl;
    cout<< min_value <<endl;
}

void dfs(int cur, int idx, int num, int size){
    int result = 0;
    
    if(size == n-1){
        max_value = max(num, max_value);
        min_value = min(num, min_value);
    }
    else{
        for(int i = 0; i < n-1; i++){
            if(!vis[i]){
                switch (opt[i]) {
                    case 1:
                        result = num + numbers[idx];
                        break;
                    case 2:
                        result = num - numbers[idx];
                        break;
                    case 3:
                        result = num * numbers[idx];
                        break;
                    case 4:
                        result = num / numbers[idx];
                        break;
                    default:
                        break;
                }
                vis[i] = true;
                dfs(i, idx+1, result, size+1);
            }
        }
    }
    
    //backtracking
    vis[cur] = false;
}

