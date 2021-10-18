//
//  taylor_series.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 17/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;


// Recursive approach - more multiplication carried out.
// O(n~2) multiplcations
// Can we reduce the number of multiplactions ?
double taylor(double x, double n){
    static double p = 1, f = 1;
    double r;
    if (n==0) {
        return 1;
    } else {
        r = taylor(x,n-1);
        p = p*x;
        f = f*n;
        return r+p/f;
    }
}

// Optimized Recursive approach
// O(n) multiplications only
// Taylor Series using Horner's rule.
double taylor_horner(double x, double n){
    static double sum = 1;
    if (n==0) {
        return sum;
    } else {
        sum = 1+x/n*sum;
        return taylor_horner(x, n-1);
    }
}

// Iterative approach to this series
double loopTaylor(double x, double n){
    double sum = 1;
    if (n==0) {
        return sum;
    }
    while (n>0) {
        sum = 1+x/n*sum;
        n--;
    }
    return sum;
}

int main() {
    cout<<taylor(1,10)<<endl;
    cout<<taylor_horner(1,10)<<endl;
    cout<<loopTaylor(1,10)<<endl;
    return 0;
}
