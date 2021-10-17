//
//  exponent.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 17/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Power of number - optimized solution recursive.
int pow(int m, int n){
    if (n==0) {
        return 1;
    } else if (n%2 == 0){
        return pow(m*m, n/2);
    } else {
        return m * pow(m*m, (n-1)/2);
    }
}

// Simple recursive approach.
int simplePow(int m, int n){
    if (n==0) {
        return 1;
    } else {
        return simplePow(m, n-1)*m;
    }
}

// Iterative appraoch to solve the power function.
int loopPow(int m, int n){
    int value = 1, i = 1;
    if (n==0) {
        return 1;
    } else {
        while (i<=n) {
            value = value * m;
            i++;
        }
        return value;
    }
}

int main() {
    cout<<pow(2,9)<<endl;
    cout<<simplePow(2,9)<<endl;
    cout<<loopPow(2,4)<<endl;
    return 0;
}
