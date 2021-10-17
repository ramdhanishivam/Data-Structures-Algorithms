//
//  factorial.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Factorial of number using recursive & looping/iteration.

int fact(int n){
    if (n==0) {
        return 1;
    } else {
        return fact(n-1)*n;
    }
}

int loopFact(int n){
    if (n==0) {
        return 1;
    }
    int prod = 1;
    for (int i=1; i<=n; i++) {
        prod = prod*i;
    }
    return prod;
}

int main() {
    cout<<"Recursive Function - 5!: "<<fact(5)<<endl;
    cout<<"Loop Function - 5!: "<<loopFact(5)<<endl;
    return 0;
}
