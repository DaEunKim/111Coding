//
//  main.cpp
//  2583영역구하기
//
//  Created by 김다은 on 2017. 9. 4..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checkArea(int sq[][101], int i, int j, int M, int N){
    
    if(sq[i][j] == 1 || i < 0 || j < 0 || i>=M || j>=N)
        return 0;
    sq[i][j] = 1;
    
    return checkArea(sq, i+1, j, M, N)+checkArea(sq, i, j+1, M, N)+checkArea(sq, i-1, j, M, N)+checkArea(sq, i, j-1, M, N)+1 ;
}

int main(void){
    int M, N, K;
    cin >> M >> N >> K;
    
    int left_x, left_y, right_x, right_y;
    int sq[101][101] = {0,};

    //영역 갯수는 재귀가 불린 횟수
    //영역 넓이는 0의 갯수

    for(int z = 0; z < K; z++){
        cin >> left_x >> left_y >> right_x >> right_y;
        
        for(int i = left_y; i < right_y; i++){
            for(int j = left_x; j< right_x; j++){
                sq[i][j] = 1;
            }
        }
    }

    int size= 0;
    
    vector<int> v;
    
    
    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
            size = checkArea(sq, i, j, M, N);
            if(size!=0){
                v.emplace_back(size);
            }

        }
    }
    cout<< v.size()<<endl;
    sort(v.begin(), v.end());
    
    for(auto i=v.begin(); i!=v.end();i++){
        cout<< *i << " ";
    }
    cout<<endl;

    
}
