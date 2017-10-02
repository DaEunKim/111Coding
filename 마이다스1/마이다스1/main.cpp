//
//  main.cpp
//  마이다스1
//
//  Created by 김다은 on 2017. 9. 30..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int n, m;
    cin >> n >>m;
    int k;
    cin >> k;
    
    int r, c1, c2;
    int arr[11][11] = {0,};
    
    for(int z = 0;z<k;z++){
        cin  >> r>> c1>> c2;
        
        for(int i = r; i<=r; i++){
            for(int j = c1; j<=c2; j++){
                arr[j][i] = 1;
            }
            
        }

    }
    int cnt = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(arr[i][j]==0)
                cnt++;
        }
    }
    cout<< cnt<<endl;

}
