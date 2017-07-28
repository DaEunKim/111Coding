//
//  main.cpp
//  14002가장긴증가하는부분수열4
//
//  Created by 김다은 on 2017. 7. 28..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int order[1001]= {0,};

int lower_bound(int start, int end, int target)
{
    int mid;
    
    while (start < end)
    {
        mid = (start + end) / 2;
        
        if (order[mid] < target)
            start = mid + 1;
        
        else
            end = mid;
    }
    
    return end + 1;
}


int main(void){
    int N;
    cin >> N;
    int A[1001] ={0,};
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    stack<int> s;
    typedef pair<int, int> pii;
    
    pii ans[1001]; // first :: lis가 될 수 있는 위치, second :: 해당하는 값
    int index= 0;
    
    order[index] = A[0];
    ans[0].first = 0;
    ans[0].second = A[0];
    
    for(int i = 1;i<N;i++){
        if(order[index] < A[i]){
            order[++index] = A[i];
            
            ans[i].first = index;
            ans[i].second = A[i];
        }
        else{
            int loc = lower_bound(0, index, A[i]); //지정해준 A[i]보다 크거나 같은거 찾아주는 함수. LIS
            order[loc - 1] = A[i];
            
            ans[i].first = loc-1;
            ans[i].second = A[i];
        }
        
    }
    
    cout<<index+1<<endl;
    
    int t = index;
    for(int i = N-1;i>=0;i--){
        if(ans[i].first == t){
            s.push(ans[i].second);
            t--;
        }
        
    }
    
    while (!s.empty()) {
        cout<< s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    

}
