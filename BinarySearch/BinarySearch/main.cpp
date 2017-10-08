//
//  main.cpp
//  BinarySearch
//
//  Created by 김다은 on 2017. 10. 6..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int binarySearch(int find_value, int *arr, int n){
    int begin = 0;
    int end = n-1;
    int mid;
    
    do {
        mid = (begin + end) / 2;
        
        if (arr[mid] == find_value)
            return mid+1;
        
        if (arr[mid] > find_value)
            end = mid - 1;
        else
            begin = mid + 1;
        
    } while(begin <= end);
    
    return -1;
    
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
    
    cout<< binarySearch(find_value, arr, n)<<endl;
    
    
}
//30
//1 3 7 8 11 12 15 17 20 25 27 38 41 45 48 50 52 55 57 60 64 68 70 72 74 76 78 81 83 97
//50







