//
//  fibonaci_recursive_&_memoization.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 17/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// getting the nth number in series.
// O(2~n)
int rFibo(int n){
    if (n<=1) {
        return n;
    } else {
        return rFibo(n-2)+rFibo(n-1);
    }
}

// getting the nth number in series using memoization & recursion.
// Opmization - reducing the repeatative functions calls.
int F[10];

int mFibo(int n){
    if (n<=1) {
        F[n] = n;
        return n;
    } else {
        if (F[n-2] == -1) {
            F[n-2] = mFibo(n-2);
        }
        if (F[n-1] == -1) {
            F[n-1] = mFibo(n-1);
        }
        F[n] = F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}

int main() {
    for (int i=0; i<=10; i++) {
        F[i] = -1; // For memoization, we initialize the array the array elements to -1.
    }
    cout<<mFibo(8)<<endl;
    cout<<rFibo(8)<<endl;
    return 0;
}
