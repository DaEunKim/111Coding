//
//  main.cpp
//  SW1204최빈수구하기
//
//  Created by 김다은 on 22/03/2019.
//  Copyright © 2019 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    while (T!=0) {
        int arr[1001] = {0,};
        int Tnum;
        cin >> Tnum;
        
        int inputTxt;
        for(int i = 0;i<1000;i++)
        {
            cin >> inputTxt;
            arr[inputTxt]++;
        }
        
        int max_Val = 0;
        int mode = 0;
        for(int i = 0;i<1000;i++){
            if(arr[i] > max_Val){
                max_Val = arr[i];
                mode = i;
            }
            else if(arr[i] == max_Val){
                if(mode < i){
                    mode = i;
                }
            }
        }
        cout<<"#" <<Tnum <<" "<<mode<<endl;
        
        T--;
        
    }
    return 0;
}

