//
//  main.cpp
//  kakao1
//
//  Created by 김다은 on 2017. 8. 5..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int n;
vector<vector<int> > city_map(501, vector<int>(501, 0));
void DFS(int x, int y, int l){
    int min;
    if (x == n - 1 && y == n - 1)
    {
        if (min > l)
            min = l;
        return;
    }
    
    if (x > 0 && city_map[x - 1][y] == 0 && city_map[x - 1][y] != 2 )
        DFS(x - 1, y, l + 1);

    if (x < n - 1 && city_map[x + 1][y] == 0 && city_map[x + 1][y] != 2)
        DFS(x + 1, y, l + 1);

    if (y > 0 && city_map[x][y - 1] == 0 && city_map[x][y-1] != 1)
        DFS(x, y - 1, l + 1);
    
    if (y < n - 1 && city_map[x][y + 1] == 0 && city_map[x][y+1] != 1)
        DFS(x, y + 1, l + 1);
    
    city_map[x][y] = 1;
}

void solution(int m, int n, vector<vector<int>> city_map) {
    int answer = 0;
    answer = m*n;
    DFS(0, 0, 1);
    
    int MOD = 20170805;
    printf("%d\n", answer%MOD);
    
    
}


int main(void){
    int m, n;
    scanf("%d %d", &m, &n);
    
    vector<vector<int>> city_map(501);
    vector<int> v1 = {0,2,0,0,0,2};
    vector<int> v2 = {0,0,2,0,1,0};
    vector<int> v3 = {1,0,0,2,2,0};
    
    city_map.push_back(v1);
    city_map.push_back(v2);
    city_map.push_back(v3);
    
    solution(m, n, city_map);

    
}
