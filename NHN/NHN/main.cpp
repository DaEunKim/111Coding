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

int checkArea(int sq[][11], int i, int j, int N){
    
    if(sq[i][j] == 0 || i < 0 || j < 0 || i>=N || j>=N)
        return 0;
    sq[i][j] = 0;
    
    return checkArea(sq, i+1, j, N) + checkArea(sq, i, j+1, N) + checkArea(sq, i-1, j, N) + checkArea(sq, i, j-1, N) + 1;
}

int main(void){
//6
//0 1 1 0 0 0
//0 1 1 0 1 1
//0 0 0 0 1 1
//0 0 0 0 1 1
//1 1 0 0 1 0
//1 1 1 0 0 0

    int N;
    cin >>N;
    int sq[11][11] = {0,};
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cin >> sq[i][j];
            
        }
    }

    int size= 0;
    
    vector<int> v;
    
    
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            size = checkArea(sq, i, j, N);
            if(size!=0){
                v.emplace_back(size);
            }
        }
    }

    cout<< v.size()<<endl;
    sort(v.begin(), v.end());
    
    for(auto i=v.begin(); i!=v.end();i++){
        cout<< *i;
        if(i!= v.end()-1)
            cout<<" ";
    }
    cout<<endl;
    
    
}
