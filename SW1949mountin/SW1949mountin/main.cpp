//
//  main.cpp
//  SW1949mountin
//
//  Created by 김다은 on 22/03/2019.
//  Copyright © 2019 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
#include <utility>
#include <cstdlib>
using namespace std;

int BFS(int arr[][9], int a, int b, int N){
    queue<pair<int, int>> q;
    int cnt = 1;
    q.push(make_pair(a, b));
    while (1) {
        queue<pair<int, int>> q2;

        while (!q.empty()) {
            int a_tmp = q.front().first;
            int b_tmp = q.front().second;
            
            int val = arr[a_tmp][b_tmp];
            
            q.pop();
            
            int dx[4] = {0, 1, 0, -1};
            int dy[4] = {1, 0, -1, 0};
            
            for(int i = 0;i<4;i++){
                int x = a_tmp + dx[i];
                int y = b_tmp + dy[i];
                if(x<0 || y<0 || x>=N || y>=N)
                    continue;
                if(arr[x][y] < val) {
                    q2.push(make_pair(x, y));
                }
            }
        }
        
        if(q2.empty())
            break;
        cnt++;
        q = q2;
    }
    return cnt;
}

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    
    int num = 1;
    while (T--) {
        int arr[9][9] = {0,};
        int N = 0;
        
        cin >> N;//한변의 길이
        int K = 0;
        cin >> K;//공사 가능 깊이

        
        int height_val = 0;
        
        for(int i = 0;i<N;i++){
            for(int j = 0;j<N;j++){
                cin >> arr[i][j];
                if(arr[i][j] > height_val){
                    height_val = arr[i][j];
                }
            }
        }
        
        int maxHeight = 1;
        
        for (int k=0; k<N; ++k)
        {
            for (int l=0; l<N; ++l)
            {
                for (int m=1; m<=K; m++)
                {
                    arr[k][l] -= m;
                    
                    for(int i = 0;i<N;i++){
                        for(int j = 0;j<N;j++){
                            if(arr[i][j] == height_val){
                                maxHeight = max(BFS(arr, i, j, N), maxHeight);//start
                            }
                        }
                    }

                    arr[k][l] += m;
                }
            }
        }
        

        cout<<"#"<< num++ <<" "<<maxHeight << endl;
    }
    
    return 0;
}
