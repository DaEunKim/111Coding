//
//  main.cpp
//  7569토마토
//
//  Created by 김다은 on 2018. 12. 13..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int M, N, H;
    cin >> M >> N >> H;
    
    int arr[101][101] = {0,};
    
    int arr_h = N+H;
    for(int i = 0;i<arr_h;i++){
        for(int j = 0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    
    return 0;
}
