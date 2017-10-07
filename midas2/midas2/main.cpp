//
//  main.cpp
//  midas2
//
//  Created by 김다은 on 2017. 10. 2..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

void condi(int *length, int tmp, int n, int m){
    int sum_tmp = 0;
    for(int i =0;i<m;i++){
        sum_tmp += length[i]/tmp;
    }
    if(sum_tmp >= n){
        cout<< tmp <<endl;
    }
    else{
        condi(length, --tmp, n, m);
    }

}

int main(void){
    int n, m;
    cin >> n >> m;
    int length[1001]= {0,};
    for(int i = 0;i<m;i++){
        cin >> length[i];
    }
    
    int sum = 0;
    for(int i =0;i<m;i++){
        sum += length[i];
    }
    int tmp = sum/n;
    
    condi(length, tmp, n, m);
    

}

