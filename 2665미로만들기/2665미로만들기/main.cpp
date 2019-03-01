//
//  main.cpp
//  2665미로만들기
//
//  Created by 김다은 on 2018. 12. 6..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n;
int arr[51][51] = {0,};
int vis[51][51] = {0,};

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

queue<pair<int, int>> q;
int cnt_way = 0;

void bfs(){
    while (!q.empty()) {
        int first = q.front().first;
        int second = q.front().second;
        q.pop();
        vis[first][second] = 1;
        
        for(int i = 0;i<4;i++){
            
            int x = first + dx[i];
            int y = second + dy[i];
            if(x<0 || y<0 || x>=n || y >=n)
                continue;
            
            if(!vis[x][y] && arr[x][y] == 0){
                arr[x][y] = 1;
                
                cnt_way++;
                bfs();
                
            }
        }
    }
}


int main(void){
    cin >> n;
    char c;
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> c;
            arr[i][j] = c - '0';
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }
    bfs();
    
    cout<< cnt_way <<endl;
}
