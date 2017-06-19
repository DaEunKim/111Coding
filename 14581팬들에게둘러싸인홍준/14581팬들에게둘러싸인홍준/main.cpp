//
//  main.cpp
//  14581팬들에게둘러싸인홍준
//
//  Created by 김다은 on 2017. 5. 23..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void){
    char id[21]={0,};
    
    scanf("%s", id+1);
    string fan = ":fan:";
    
    string arr[3][3];
    
    
    for(int i = 0;i<3;i++){
        for(int j= 0;j<3;j++){
            
            arr[i][j] = fan.c_str();
        }
    }
    id[0] = ':';

    id[strlen(id)] = ':';

    arr[1][1] = id;
    for(int i = 0;i<3;i++){
        for(int j= 0;j<3;j++){
            
            printf("%s", arr[i][j].c_str());
        }
        puts("");
    }
}//:appa:
