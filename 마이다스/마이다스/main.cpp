//
//  main.cpp
//  마이다스
//
//  Created by 김다은 on 2017. 9. 30..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int pallen(char *arr, char *arr2, unsigned long size){
    int i = 0;
    int cnt = 0 ;
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            if(arr[i]!=arr2[i]){
                
            }
        }
    }
    while (arr[size/2-1]!=arr2[size/2-1]) {
        arr2[size/2] = arr2[size/2]-i;
        i++;
        cnt++;
    }
    return cnt;
    
}

int main(void){
    int n;
    cin >> n;
    string input;
    char arr[10000];
    char arr2[10000];
    for(int z = 0; z<n; z++){
        cin >> input;
        
        unsigned long size = input.length();
        for(int i = 0;i<size;i++){
            arr[i] = input.at(i);
        }
        
        for(int i = 0;i<size;i++){
            arr2[i] = input.at(size-i-1);
        }
        
        string letter1 = arr;
        string letter2 = arr2;
        
//        cout<< arr[size/2-1]<<endl;
        if(letter1 ==letter2)
            cout<< 0 <<endl;
        else{
//            cout<< pallen(arr, arr2, letter1.size())<<endl;
        }
        
    }
    
}
