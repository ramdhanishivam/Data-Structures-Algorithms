//
//  combination_ncr.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 18/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int factorial(int n){
    if (n<=1) {
        return 1;
    } else{
        return factorial(n-1)*n;
    }
}

// Normal Approach to implement Combination Formula
// "n choose r"
int nCr(int n, int r){
    int numerator, denominator;
    numerator = factorial(n);
    denominator = factorial(n-r)*factorial(r);
    
    return numerator/denominator;
}

// Pascal's Traingle approach uses addtion to solve the combination.
// This is a recursive way for the same problem.
int pascal_nCr_recursive(int n, int r){
    if (r==0 || n==r) {
        return 1;
    } else {
        return pascal_nCr_recursive(n-1, r-1) + pascal_nCr_recursive(n-1, r);
    }
}

int main() {
    cout<<"Using nCr - "<<nCr(4, 3)<<endl;
    cout<<"Using pascal_nCr_recursive - "<<pascal_nCr_recursive(4, 3)<<endl;
    return 0;
}
