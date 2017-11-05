//
//  main.cpp
//  2178미로탐색
//
//  Created by 김다은 on 2017. 10. 26..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

bool isValid(int x, int y, int sizeX, int sizeY) {
    if (x < 0 || y < 0 || x >= sizeX || y >= sizeY)
        return false;
    return true;
}

void maze(int arr[][100], int n, int m){
    queue<pair<int, int>> q;
    
    q.push(make_pair(0, 0));
    
    int cnt = 0;

    while (1) {
        unsigned long long size = q.size();
        cnt++;
        for (int i=0; i<size; i++) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            if(x == n-1 && y == m-1)
                goto OUT;

            if(isValid(x+1, y, n, m) && arr[x + 1][y] == 1){
                q.push(make_pair(x + 1, y));
                arr[x + 1][y] = 0;
            }
            if(isValid(x-1, y, n, m) && arr[x - 1][y] == 1){
                q.push(make_pair(x - 1, y));
                arr[x - 1][y] = 0;
            }
            if(isValid(x, y+1, n, m) && arr[x][y + 1] == 1){
                q.push(make_pair(x, y + 1));
                arr[x][y + 1] = 0;
            }
            if(isValid(x, y-1, n, m) && arr[x][y - 1] == 1){
                q.push(make_pair(x, y - 1));
                arr[x][y - 1] = 0;
            }
        }

    }
OUT:
    cout<< cnt<<endl;
}

int main(void){
    int n, m;
    cin >> n >> m;
    int arr[100][100]= {0,};
    string s;
    char text[100][100];
    
    for(int i = 0;i<n;i++){
        cin >> s;
        for(int j = 0;j<m;j++){
            text[i][j] = s.at(j);
        }
        
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = text[i][j] - '0';
        }
    }
    
    maze(arr, n, m);
    
    
}
