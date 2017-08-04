//
//  main.cpp
//  7576토마토
//
//  Created by 김다은 on 2017. 8. 4..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

bool isCheck(int arr[][1000], int x, int y, int sizeX, int sizeY){
    if(x <0 || y<0)
        return false;
    if(x >= sizeX || y >= sizeY)
        return false;
    if (arr[y][x] == -1 || arr[y][x] == 1)
        return false;
    return true;
}

bool allRipen(int arr[][1000], int x, int y){
    bool flag = true;
    
    for(int i = 0;i<y;i++){
        for(int j = 0;j<x;j++){
            if(arr[i][j]==0)
                flag = false;
            else if (arr[i][j]==2) {
                arr[i][j] = 1;
            }
        }
    }
    
    return flag;
}

int check_arr(int arr[][1000], int x, int y){
    bool flag = true;
    
    for(int i =0;i<y;i++){
        for(int j = 0;j<x;j++){
            if(arr[i][j]==1){
                
                if(isCheck(arr, j+1, i, x, y)==true){
                    arr[i][j+1] = 2;
                    flag = false;
                }
                if(isCheck(arr, j, i+1, x, y)==true){
                    arr[i+1][j] = 2;
                    flag = false;
                }
                if(isCheck(arr, j-1, i, x, y)==true){
                    arr[i][j-1] = 2;
                    flag = false;
                }
                if(isCheck(arr, j, i-1, x, y)==true){
                    arr[i-1][j] = 2;
                    flag = false;
                }
            }
        }
    }
    
    
    if(allRipen(arr, x, y))
        return 1;
    if(flag)
        return -1;
    return 0;
}

int main(void){
    int x, y;
    cin >> x >> y;
    
    int arr[1000][1000] = {0, };
    
    for(int i = 0;i<y; i++){
        for(int j = 0;j<x; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    if(allRipen(arr, x, y)){
        printf("%d\n", 0);
        return 0;
    }

    int cnt = 0;
    while (1) {
        cnt++;
        int ans = check_arr(arr, x, y);
        
        if (ans == 1) {
            break;
        }
        else if (ans ==-1){
            printf("%d\n", -1);
            return 0;
        }
        
//        for(int i =0;i<y;i++){
//            for(int j = 0;j<x;j++){
//                printf("%2d ", arr[i][j]);
//                
//            }
//            puts("");
//        }
//        puts("");
    }
    printf("%d\n", cnt);

}
