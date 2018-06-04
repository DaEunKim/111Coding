//
//  main.cpp
//  1935후위표기식2
//
//  Created by 김다은 on 2018. 5. 31..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
    int n;
    cin >> n;
    string s;
    cin >> s;
    double arr[27] = {0,};
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    stack<double> calculation;

    unsigned long size = s.size();
    char op;
    double result = 0;
    
    for(int i = 0;i<size;i++){
        op = s.at(i);
        
        if(op=='+' || op=='-' || op=='*' || op=='/' ){
            double val2 = calculation.top();
            calculation.pop();
            double val1 = calculation.top();
            calculation.pop();

            switch (op) {
                case '+':
                    
                    calculation.push(val1+val2);
                    break;
                case '-':
                    calculation.push(val1-val2);
                    break;
                case '*':
                    calculation.push(val1*val2);
                    break;
                case '/':
                    calculation.push(val1/val2);
                    break;
            }
        }
        else if(op>='A' && op<='Z'){
            double val = arr[op - 'A'];
            calculation.push(val);
        }
        result = calculation.top();
    }
    printf("%.2f\n", result);
}

