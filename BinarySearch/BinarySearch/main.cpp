//
//  main.cpp
//  BinarySearch
//
//  Created by 김다은 on 2017. 10. 6..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int rightSearch(int *arr, int find_value, int index, int n){
    for(int i = index; i<n; i++){
        if(arr[i] == find_value){
            return i+1;
        }
    }
    return *arr;
}
int leftSearch(int *arr, int find_value, int index, int n){
    for(int i = 0; i<index; i++){
        if(arr[i] == find_value){
            return i+1;
        }
    }
    return *arr;
}

int binarySearch(int find_value, int *arr,int index, int n){
    
    if(find_value > arr[index]){
        return rightSearch(arr, find_value, index, n);
    }
    else if(find_value < arr[index]){
        return leftSearch(arr, find_value, index, n);
    }
    else
        return index;
}

int main(void){
    int n;
    cin >> n;
    
    int arr[101] = {0,};
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    
    int index = (n-1)/2;

    int find_value;
    cin >> find_value;
    
    cout<< binarySearch(find_value, arr, index, n)<<endl;
    
    
}
//30
//1 3 7 8 11 12 15 17 20 25 27 38 41 45 48 50 52 55 57 60 64 68 70 72 74 76 78 81 83 97
//50







