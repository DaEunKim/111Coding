//
//  main.cpp
//  11403경로찾기
//
//  Created by 김다은 on 2017. 11. 5..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int arr[101][101] = {0,};
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            for(int z = 0;z<N;z++){
                if(arr[j][i] ==1 && arr[i][z]==1){
                    arr[j][z] = 1;
                }
                
            }
        
        }
        
    }

//    for(int i = 0;i<N;i++){
//        for(int j = 0;j<N;j++){
//
//            if(v[i].second == v[j].first){
//                getArr[v[i].first][v[j].second] = 1;
//                for(int z = 0;z<N;z++){
//                    if(v[j].second == v[z].first){
//                        getArr[v[i].first][v[z].second] = 1;
//                    }
//                }
//
//            }
//
//
//            if(v[i].first == v[j].second){
//                getArr[v[i].second][v[j].first] = 1;
//                for(int z = 0;z<N;z++){
//                    if(v[j].first == v[z].second){
//                        getArr[v[i].second][v[z].first] = 1;
//                    }
//                }
//            }
//        }
//
//    }
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cout<< arr[i][j] << " ";
        }
        cout<<endl;
    }
}
