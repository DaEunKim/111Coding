//
//  main.cpp
//  tmon
//
//  Created by 김다은 on 2018. 6. 4..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int movementTimeCal(int destination_count){//배송지간 이동시간
    int time = 2;
    int sum = 0;
    for(int i = 0;i<destination_count-1;i++){
        sum += time;
        time += 1;
    }
    return sum+3;
  
}

int main(int argc, const char * argv[]) {
    cout<< "배송가능한 상품의 갯수를 구하고자 하는 기간을 개월수로 입력하시오. "<<endl;
    
    int input_time = 0;
    cin >> input_time;//문제에는 6개월
    
    int change_hour = input_time * 30 * 24;//한달을 30일로 가정.
    
    int container_ship_count = 1;
    int product_count = 0; // 상품의 갯수
    int movement_time = 0; // 이동 시간
    
    double load_time; //싣는 시간(hour)
    int maintenance_time = 10; // 정비 시간(hour)
    
    double shipping_time = 0;//배송 가능 시간 (hour)
    int destination_count=0;//배송지 갯수
    
    int result = 0;
    
    while (change_hour!=0 || container_ship_count<=20) {
        if(change_hour==shipping_time){
            break;
        }
        if(product_count == 500){
            product_count = 0;
            container_ship_count++;
            break;
        }
        
        load_time = (product_count * 0.2)/60;
        destination_count = product_count/10;
        movement_time = movementTimeCal(destination_count);
        
        shipping_time += load_time + movement_time;

        if(shipping_time==200){ //최초 복귀

            maintenance_time += 10;
            product_count += 10;
        }

        shipping_time += 30;
        product_count += 50;
        result += product_count;

    }
    
    cout<<"투입된 선박수 : " << container_ship_count <<"개, " <<"상품 갯수 : " <<result <<"개. "<<endl;
}
