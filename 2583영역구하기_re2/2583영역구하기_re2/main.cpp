//
//  main.cpp
//  2583영역구하기_re2
//
//  Created by 김다은 on 2018. 12. 11..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int M, N, K;
int arr[101][101]= {0,};
int x1, y1, x2, y2;
int vis[101][101] = {0, };

int area = 0;

void dfs(int a, int b){
    vis[a][b] = 1;
    area++;
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    
    for(int i = 0;i<4;i++){
        int x = a + dx[i];
        int y = b + dy[i];
        
        if(x<0 || y<0 || x>=M || y>=N)
            continue;
        if(!vis[x][y] && arr[x][y]==0){
            dfs(x, y);
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> M >> N >> K;
    for(int i = 0;i<K; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        
        for(int j = y1; j < y2; j++){
            for(int z = x1; z < x2; z++){
                arr[j][z] = 1;
            }
        }
    }
    int cnt = 0;
    vector<int> v;
    for(int i = 0;i<M;i++){
        for(int j = 0;j<N;j++){
            if(!vis[i][j] && arr[i][j]==0){
                cnt++;
                area = 0;
                dfs(i, j);
                v.push_back(area);
            }
            
        }
    }
    
    cout<< cnt <<endl;
    sort(v.begin(), v.end());
    for(auto i = v.begin(); i!= v.end();i++)
        cout<< *i <<" ";
    cout<<endl;
}

