//
//  main.cpp
//  2960에라토스테네스의채
//
//  Created by 김다은 on 01/03/2019.
//  Copyright © 2019 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, k;
    cin >> n >> k;
    
    int arr[1001] = {0,};
    for(int i = 2;i<=n;i++){
        arr[i] = i;
    }
    
    int cnt = 0;
    int save_val[1001] = {0,};
    
    for(int i = 2;i<=n;i++){
        for(int j = 2;j<=n;j++){
            if(arr[j]!=0 && arr[j] % i == 0){
                save_val[cnt++] = arr[j];
                arr[j] = 0;
            }
        }
    }
    
    cout<< save_val[k-1]<<endl;
    
}
