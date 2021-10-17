//
//  sum_of_natural_nos.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Sum of 'n' natural numbers using recursive, looping & formula method.

int sum(int n){
    if (n==0) {
        return 0;
    } else {
        return sum(n-1)+n;
    }
}

int loopSum(int n){
    int s = 0;
    for (int i=1; i<=n; i++) {
        s = s+i;
    }
    return s;
}

int formulaSum(int n){
    return n*(n+1)/2;
}

int main() {
    cout<<"Recusive Function - Sum: "<<sum(3)<<endl;
    cout<<"Loop Function - Sum: "<<loopSum(3)<<endl;
    cout<<"Formula Function - Sum: "<<formulaSum(3)<<endl;
    return 0;
}
