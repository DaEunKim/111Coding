//
//  main.cpp
//  4948베르트랑공준
//
//  Created by 김다은 on 2017. 10. 2..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

void Eratos(int n)
{
    // 배열을 동적할당 할 포인터 선언
    bool* PrimeArray;
    
    // 만일 n이 1보다 작거나 같으면 함수 종료
    if(n<=1) return;
    
    /*    2부터 n까지 n-1개를 저장할 수 있는 배열 할당
     배열 참조 번호와 소수와 일치하도록 배열의 크기는
     n+1 길이만큼 할당(인덱스 번호 0과 1은 사용하지 않음)    */
    PrimeArray=new bool[n+1];
    /*    배열초기화
     처음엔 모두 소수로 보고 true값을 줌    */
    for(int i=2; i<=n; i++) PrimeArray[i]=true;
    
    /*    에라토스테네스의 체에 맞게 소수를 구함
     만일, PrimeArray[i]가 true이면 i 이후의 i 배수는
     약수로 i를 가지고 있는 것이 되므로 i 이후의 i 배수에 대해
     false값을 준다.
     PrimeArray[i]가 false이면 i는 이미 소수가 아니므로 i의 배수 역시
     소수가 아니게 된다. 그러므로 검사할 필요도 없다.    */
    
    for(int i=2; (i*i)<=n; i++){
        if(PrimeArray[i])
        {
            for(int j=i*i; j<=n; j+=i) PrimeArray[j]=false;
        }
    }
    
    // 이후의 작업 ...
    
}
int main(void){
    int n;
    while (1) {
        cin >> n;
        if(n==0)
            break;
        
        Eratos(n);
        
        
    }
    
}
