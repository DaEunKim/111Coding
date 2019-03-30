//
//  main.cpp
//  자원캐기
//
//  Created by 김다은 on 2017. 3. 10..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int N, M;
    cin >> N >> M;
    int arr[301][301] ={0, };
    
    for(int i = 1;i<=N;i++){
        for(int j = 1;j<=M;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 1;i<=N;i++){
        for(int j = 1;j<=M;j++){
            if(arr[i-1][j] < arr[i][j-1])
                arr[i][j] = arr[i][j-1]+arr[i][j];
            
            else if(arr[i-1][j] >= arr[i][j-1])
                arr[i][j] = arr[i-1][j]+arr[i][j];
            
        }
    }
    
   
    cout << arr[N][M] <<endl;
    
}
