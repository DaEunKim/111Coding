//
//  main.cpp
//  달팽이는올라가고싶다
//
//  Created by 김다은 on 2017. 2. 16..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    long long A, B, V;
    cin >> A >> B>> V;
    
//    long long left =0;
//    long long right = (V-B-1)/(A-B)+1;// + (V-B)%(A-B);
//    long long result = (V-B-1)/(A-B)+1;//+ (V-B)%(A-B);
//
//    while (left<=right) {
//        long long mid = (left + right)/2;
//        long long total = 0;
//
//        total = (mid-B-1)/(A-B)+1;// + (mid-B)%(A-B);
//
//        if(total < V){
//            left = mid+1;
//        }
//        else{
//            if(result > mid)
//                result = mid;
//            right = mid-1;
//        }
//    }
    cout<< (V-B-1)/(A-B)+1 <<endl;
}
