//
//  main.cpp
//  3783세제곱근
//
//  Created by 김다은 on 2018. 1. 4..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
double diff(double n,double mid){
    if (n > (mid*mid*mid))
        return (n-(mid*mid*mid));
    else
        return ((mid*mid*mid) - n);
}

// Returns cube root of a no n
double cubicRoot(double n){
    
    // Set start and end for binary search
    double start = 0, end = n;
    
    // Set precision
    double e = 0.0000001;
    
    while (true){
        double mid = (start + end)/2;
        double error = diff(n, mid);
        
        // If error is less than e then mid is
        // our answer so return mid
        if (error <= e)
            return mid;
        
        // If mid*mid*mid is greater than n set
        // end = mid
        if ((mid*mid*mid) > n)
            end = mid;
        
        // If mid*mid*mid is less than n set
        // start = mid
        else
            start = mid;
    }
}

// Driver code
int main(void){
    int n;
    cin >> n;
    double input;
    
    for(int i = 0;i<n;i++){
        cin >> input;

        printf("%lf\n",cubicRoot(input));
    }

}

//double Fix(double a, int n){
//    return ((int) a*pow(10.0, n))/pow(10.0, n);
//}
//
//int main(void){
//    int n;
//    cin >> n;
//    double input[101]={0, };
//    for(int i = 0;i<n;i++){
//        cin >> input[i];
//    }
//    double result[101] ={0,};
//    for(int i = 0;i<n;i++){
//        result[i] = pow(input[i], 1.0/3.0);
//    }
//    cout << fixed;
//    cout.precision(10);
//
//
//    double value = 0.0;
//    for(int i = 0;i<n;i++){
////        value = floor(10000000000.*result[i])/10000000000;
//
////        cout<< Fix(result[i], 10)<<endl;
////        printf("%f\n", result[i]);
//        cout<< result[i]<<endl;
//    }
//}

