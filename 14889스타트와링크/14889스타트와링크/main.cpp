//
//  main.cpp
//  14889스타트와링크
//
//  Created by 김다은 on 2018. 4. 11..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N;
int arr[20][20] = {0, };
int team = 0;
int num_case[20] = {0,};
int idx[20] = {0,};
int min_val = 99999;

int cal_team(int array[20]){
    int result = 0;
    for(int i = 0;i<team;i++){
        for(int j = i+1; j<team; j++){
            result += arr[array[i]][array[j]] + arr[array[j]][array[i]];
        }
    }
    return result;
}

void divide_team(int num_case[20]){
    int tmp[20] = {0, };
    for(int i = 0;i<team;i++){
        tmp[num_case[i]] = 1;
    }
    int team_a[20] = {0,};
    int team_b[20] = {0,};
    
    int a=0, b=0;
    for(int i = 0;i<N;i++){
        if(tmp[i]==1){
            team_a[a++] = i;
        }
        else{
            team_b[b++] = i;
        }
    }
    
    int a_val = cal_team(team_a);
    int b_val = cal_team(team_b);
    
    cout<< a_val <<" "<<b_val<<endl;
    
    int result = 0;
    result = abs(a_val-b_val);
    
    min_val = min(result, min_val);
}

void dfs(int start, int depth){
    if(depth == team){
        divide_team(num_case);
        return;
    }
    for(int i = start;i<N;i++){
        num_case[depth] = idx[i];
        dfs(i+1, depth+1);
    }
}

int main(int argc, const char * argv[]) {
    cin >> N;
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0;i<N;i++){
        idx[i] = i+1;
    }
    team = N/2; //랜덤팀 완전탐색 팀갯수대로

    dfs(0, 0);

    cout<<min_val<<endl;

    return 0;
}
