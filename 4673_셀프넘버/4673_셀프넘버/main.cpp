//
//  main.cpp
//  4673_셀프넘버
//
//  Created by 김다은 on 2017. 6. 17..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int selfnum(int num){
    unsigned int sum=0;
    int i = 1;
    
    if(num<=10)
        sum = num + (num/10) + (num%10);
    else if(num>10 and num<=100)
        sum = num + (num/100) + ((num/10)%10) +(num%10);
    else if(num>100 and num<=1000)
        sum = num + (num/1000) + ((num/100)%10) + ((num/10)%10) + (num%10);
    else if(num>1000 and num<=10000)
        sum = num + (num/10000) + ((num/1000)%10) +((num/100)%10) +((num/10)%10) + (num%10);
    else
        return 0;
    int self;
    //    cout<<sum<<endl;
    if(sum!=i){
        self = i;
        cout<<self<<endl;
    }
    return selfnum(sum);
    
}
int main(void){
    selfnum(1);
    
}
