//
//  main.cpp
//  10039평균점수
//
//  Created by 김다은 on 2017. 3. 28..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int arr[5] = {0, };
    int sum = 0;
    
    int avg = 0;
    
    for(int i = 0;i<5;i++){
        cin >> arr[i];
    }
    
    for(int i = 0;i<5;i++){
        if(arr[i]<40)
            arr[i] = 40;
        sum += arr[i];
        

    }
    avg = sum/5;
    cout<< avg <<endl;
}
