//
//  main.cpp
//  1920수찾기
//
//  Created by 김다은 on 2018. 1. 2..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;


vector<pair<int, int>> binarySearch(vector<pair<int, int>> target, vector<pair<int, int>> comparison){
    unsigned long comp_size = comparison.size();
    unsigned long target_size = target.size();

    unsigned long left = 0 ;
    unsigned long right = target_size;
    unsigned long result=0;
    vector<pair<int, int>> tmp;
    tmp = target;
    for(int i = 0 ;i<comp_size;i++){

        while (left <= right){
            unsigned long mid = (left + right) / 2;
            if (target[mid].first < comparison[i].first){
                right = mid - 1;
//                tmp[right].first = 0;
            }
            else if (target[mid].first > comparison[i].first){
                left = mid + 1;
//                tmp[left].first = 0;
            }

            else {
                result = mid;
                tmp[result].first = 1;
            }
        }
        if(left>right)
            tmp[left].first = 0;


    }


    return tmp;
}

int main(void){
    vector<pair<int, int>> comparison;
    
    int N;
    cin >> N;
    
    int arr[100001] = {0,};
    for(int i = 0;i<N;i++){
        cin >> arr[i];
        comparison.push_back(make_pair(arr[i], i));
    }
    
    vector<pair<int, int>> target;

    int M;
    cin >> M;
    int find_arr[100001] = {0,};
    for(int i = 0;i<M;i++){
        cin >> find_arr[i];
        target.push_back(make_pair(find_arr[i], i));
    }
    sort(target.begin(), target.end());
    
    //
//    for(vector<int>::iterator i = target.begin();i!= target.end();i++){
//        if(binary_search(comparison.begin(), comparison.end(), *i)){
//            cout<< 1 <<endl;
//        }
//        else{
//            cout<< 0 <<endl;
//        }
//    }
//
    for (auto i = 0; i < N; i++){
        cout<< binarySearch(target, comparison)[i].first <<endl;

//        cout << comparison[i].first  << ", " <<  comparison[i].second << endl;
    }
//
//    sort(target[0].second, target[M].second);
//
//    for (int i = 0; i < target.size(); i++)
//        cout << target[i].first  << ", " <<  target[i].second << endl;

}
