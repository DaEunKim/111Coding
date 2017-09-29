//
//  main.cpp
//  삽입정렬
//
//  Created by 김다은 on 2017. 9. 29..
//  Copyright © 2017년 김다은. All rights reserved.
//
//



#include <iostream>
#include <algorithm>
using namespace std;

int insertion(int *arr, int *save, int num){
    sort(arr, arr+5);
    for(int i= 0;i<5;i++){
        save[i] = arr[i];
    }
    for(int i = 5;i<10;i++){
        if(arr[i]>num){
            save[i+1] = num;
        }
        else{
            save[i+1] = arr[i];
        }
    }
    return *save;
    
}

int main(void){
    int arr[10] = {35, 9, 8, 18, 98, 31, 58, 17, 76, 45};
    int num = 31;

    int save[10] = {0,};
    
    
    insertion(arr, save, num);
    
    for(int i = 0;i<10;i++){
        cout<< save[i] <<" ";
    }
    cout<<endl;
    
}
