//
//  main.cpp
//  midas3
//
//  Created by 김다은 on 2017. 10. 2..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

bool sort_check(int *arr, int n){
    for(int i =0;i<n;i++){
        if(arr[i]!=i+1){
            return false;
        }
    }
    return true;
}

int main(void){
    int n;
    cin >> n;
    int arr[1001]= {0,};
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    
    next_permutation(arr, arr+n);
    
    if(sort_check(arr, n)==true)
        cout<< -1 <<endl;
    else{
        for(int i =0;i<n;i++)
            cout<< arr[i] <<" ";
        cout<<endl;
    }
}
