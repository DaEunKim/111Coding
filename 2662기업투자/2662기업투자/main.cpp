//
//  main.cpp
//  2662기업투자
//
//  Created by 김다은 on 2018. 1. 29..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int money, company;
    cin >> money >> company;
    int amountMoney[300] = {0, };
    
    int  profit[300][20]={0, };
    for(int i = 0;i<money;i++){
        cin >> amountMoney[i];
        for(int j = 0;j<company;j++){
            cin >> profit[i][j];
        }
    }
    for(int i = 0;i<money;i++){
        cout<<  amountMoney[i] <<" ";
        for(int j = 0;j<company;j++){
            cout<< profit[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int sum = 0;
    
    int tmp = 0;
    for(int i = 0;i<money;i++){
        for(int j = 0;j<company;j++){
            tmp = max(profit[money-i][company-1-j], profit[money-i][company-2-j]);
            if(profit[money-i][company-1-j] == tmp){
                if((money-i) == money-1){
                    sum += profit[money-i][company-1-j];
                    cout<< sum <<endl;
                    cout<< money-i <<" "<<company-1-j<<endl;
                    break;
                }
                else{
                    int index = money-1 - (money-i);
                    sum += max(profit[index-1][j], profit[index-1][j-1]);
                    cout<< sum <<endl;
                    cout<< index-1 <<" "<<j<<endl;

                }
            }
        }
    }
    
    
}
