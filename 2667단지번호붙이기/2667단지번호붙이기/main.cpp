//
//  main.cpp
//  2667단지번호붙이기
//
//  Created by 김다은 on 2018. 4. 9..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int arr[25][25]={0,};
int vis[25][25] = {0,};

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int area = 0;
void dfs(int a, int b){
    vis[a][b] = 1;
    area++;
    for(int i = 0;i<4;i++){
        int x = a+ dx[i];
        int y = b+ dy[i];
        if(x<0|| y<0 || x>=n || y>=n)
            continue;
        if(!vis[x][y] && arr[x][y]){
            dfs(x, y);
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> n;
    
    string s;
    for(int i = 0;i<n;i++){
        cin >> s;
        for(int j = 0;j<n;j++){
            arr[i][j] = s.at(j)-'0';
        }
    }
    
    int cnt = 0;
    vector<int> v;
    for(int i = 0;i<n; i++){
        for(int j = 0;j<n;j++){
            if(!vis[i][j] && arr[i][j]){
                cnt++;
                area = 0;
                dfs(i,j);
                v.push_back(area);
            }
        }
    }
    cout<<cnt<<endl;
    sort(v.begin(), v.end());
    for(auto i = v.begin();i!=v.end();i++){
        cout<< *i <<endl;
    }
    return 0;
}
