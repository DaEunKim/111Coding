//
//  main.cpp
//  좌표정렬하기
//
//  Created by 김다은 on 2017. 2. 16..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    int N;
    scanf("%d", &N);
    
    vector<pair<int, int> > vec;
    
    
    for(int i = 0;i<N;i++){
        int x, y;
        scanf("%d %d", &x, &y);
        
        vec.push_back(make_pair(x, y));
    }
    sort(vec.begin(), vec.end());
    
    for(int i = 0;i<N;i++)
        printf("%d %d\n", vec[i].first, vec[i].second);
}
