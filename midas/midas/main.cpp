//
//  main.cpp
//  midas
//
//  Created by 김다은 on 2017. 10. 2..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

bool gcd(int a, int b){
    bool flag = true;
    if (a % b == 0){
        return flag;
    }
    else{
        flag = false;
        return gcd(b, a % b);
        
    }
}

bool check(int *arr, int t){
    int *tmp = arr;
    bool flag = true;
    for(int i = 0;i<t;i++){
        for(int j = 0;j<t;j++){
            if(tmp[i]==arr[j]){
                flag = false;
            }
        }
    }
    return flag;
}
int main(void){
    int T;
    cin >> T;
    while (T--) {
        int t;
        cin >> t;
        bool flag = true;
        
        if(t==0){
            flag = false;
        }
        else{
            int arr[101]={0,};
            for(int i = 0;i<t;i++){
                cin >> arr[i];

            }
            if(check(arr, t)==false){
                flag = false;
            }
            else{
                for(int i = 1;i<=t; i++){
                    if(gcd(arr[i], arr[i-1]) == false){
                        flag = false;
                    }
                }
            }
        }
        
        if(flag)
            cout<< "NO"<<endl;
        else
            cout<< "YES"<<endl;
        
    }
    
    
}
