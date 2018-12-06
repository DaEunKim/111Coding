//
//  main.cpp
//  14891톱니바퀴_2
//
//  Created by 김다은 on 2018. 10. 12..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;

deque<int> dq[5];

void clockwise(int wheel_num){//시계방향 돌리기
    int tmp = dq[wheel_num][7];
    dq[wheel_num].pop_back();
    dq[wheel_num].push_front(tmp);
}
void counterclockwise(int wheel_num){//반시계방향
    int tmp = dq[wheel_num][0];
    dq[wheel_num].pop_front();
    dq[wheel_num].push_back(tmp);
}

void left_wheel(int wheel_num, bool clock){ //왼쪽 톱니바퀴의 변화
    if(!(wheel_num >=1 && wheel_num <= 4)){
        return;
    }
    if(dq[wheel_num-1][2] != dq[wheel_num][6]){
        //회전
        left_wheel(wheel_num+1, !clock);
        if(clock){
            clockwise(wheel_num);
        }
        else{
            counterclockwise(wheel_num);
        }
    }
}
void right_wheel(int wheel_num, bool clock){
    if(!(wheel_num >=1 && wheel_num <= 4)){
        return;
    }
    if(dq[wheel_num][2] != dq[wheel_num+1][6]){
        //회전
        right_wheel(wheel_num-1, !clock);
        if(clock){
            clockwise(wheel_num);
        }
        else{
            counterclockwise(wheel_num);
        }
        
    }
}

int main(int argc, const char * argv[]) {
    string s;
    int arr[101][101];
    
    for(int i = 1;i<=4;i++){
        cin >> s;
        for(int j = 0;j<8;j++){
            arr[i][j] = s.at(j) -'0';
            dq[i].push_back(arr[i][j]);
        }
    }
    
    
    int K;//회전횟수
    int num, pole;
    
    cin >> K;
    for(int i = 0;i<K;i++){
        cin >> num >> pole;
        if(pole ==-1){
            pole = 0;
        }
        
        if(pole ==1){//시계 방향
            left_wheel(num+1, !pole);
            right_wheel(num-1, !pole);
            clockwise(num);
        }
        else{
            left_wheel(num+1, !pole);
            right_wheel(num-1, !pole);
            counterclockwise(num);
        }
        
    }
    
    int count = 0;
    if(dq[1].front() == 1){
        count +=1;
    }
    if(dq[2].front() == 1){
        count +=2;
    }
    if(dq[3].front() == 1){
        count +=4;
    }
    if(dq[4].front() == 1){
        count +=8;
    }
    
    cout<< count<<endl;
    return 0;
}
