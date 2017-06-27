//
//  main.cpp
//  14467소가길을건넌이유1
//
//  Created by 김다은 on 2017. 6. 27..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int so_num[101];
    int zero_or_one[101];
    for(int i =0 ;i<n;i++){
        cin >> so_num[i] >> zero_or_one[i];
        
    }
    int cnt = 0;
    
    int save[11];
    for(int i = 0;i<11;i++)
        save[i] = 2;
    
//    for (int i=0; i<n; i++) {
//        if (save[so_num[i]] == 2) {
//            save[so_num[i]]=zero_or_one[i];
//        }
//        else if (save[so_num[i]]!=zero_or_one[i]){
//            cnt++;
//            save[so_num[i]] = zero_or_one[i];
//        }
//        
//    }
    
    
    
    
    for(int i = 1;i<=10;i++){
        for(int j = 0;j<n;j++){
            if(so_num[j] == i){
                if (save[i] == 2)
                    save[i] = zero_or_one[j];
                else if (save[i] != zero_or_one[j]){
                    cnt++;
                    save[i] = zero_or_one[j];
                }
                
            }
        }
    }

    cout<<cnt<<endl;

}
