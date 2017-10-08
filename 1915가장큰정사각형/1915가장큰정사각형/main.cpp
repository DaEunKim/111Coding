//
//  main.cpp
//  1915가장큰정사각형
//
//  Created by 김다은 on 2017. 10. 2..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//bool square(int width, int heigth){
//    if(width==heigth)
//        return true;
//    return false;
//}
//

int check(int arr[][1001], int i, int j, int cnt, int n, int m){
    if(i > n && j>m && i<0 && j<0)
        return 0;
    
    
    if(arr[i+1][j]==1 && arr[i+1][j+1]==1 && arr[i][j+1]==1){
        arr[i+1][j+1]= ++cnt;
            
    }
    return **arr;
}



int main(void){
    int n, m;
    cin >> n >> m;
    int arr[1001][1001] = {0,};
    string s;
    
    for(int i = 0;i<m;i++){
        cin >> s;
        for(int j = 0;j<n;j++){
            arr[i][j] = s.at(j)-'0';

        }
    }
    
    int cnt = 1;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(arr[i][j]==1){
                check(arr, i, j, cnt, n, m);
            }
        }
    }
//    for(int i = 0;i<n;i++){
//        for(int j = 0;j<m;j++){
//            cout << arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    
    int max = -1;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(arr[i][j] >  max){
                max = arr[i][j];
            }
        }
    }
    cout<< max*max <<endl;
    
    
}
