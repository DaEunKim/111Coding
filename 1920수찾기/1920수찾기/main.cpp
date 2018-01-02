//
//  main.cpp
//  1920수찾기
//
//  Created by 김다은 on 2018. 1. 2..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int N, int M, int *find_arr, int comp){
    int left = 0 ;
    int right = M;
    int result=0;
    while (left <= right){
        int mid = (left + right) / 2;
        if (find_arr[mid] > comp)
            right = mid - 1;
        else if (find_arr[mid] < comp)
            left = mid + 1;
        else{
            result = mid;
            break;
        }
    }
    return result;

}

int main(void){
    int N;
    cin >> N;
    int arr[100001] = {0,};
    for(int i = 0;i<N;i++){
        cin >> arr[i];
    }
    int M;
    cin >> M;
    int find_arr[100001] = {0,};
    for(int i = 0;i<M;i++){
        cin >> find_arr[i];
    }
    int tmp[100001] = {0,};
    for(int i = 0;i<M;i++){
        tmp[i] = find_arr[i];
    }

    sort(find_arr, find_arr+M);
    
    for(int i = 0;i<M;i++){
        cout<< find_arr[i] <<" ";
    }
    cout<<endl;
    int result = 0;
    for(int i = 0;i<N;i++){
        result = binarySearch(N, M, find_arr, arr[i]);
        cout<< result<<endl;
    }
    
    
}
