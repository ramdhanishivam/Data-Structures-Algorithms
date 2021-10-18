//
//  fibonaci_iterative.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 17/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// printing the series
void fibo(int n){
    int a[n];
    for (int i=0; i<=n; i++) {
        if (i<=1) {
            a[i] = i;
        } else {
            a[i] = a[i-2] + a[i-1];
        }
    }
    
    int i=0;
    while (i<=n) {
        cout<<a[i]<<" ";
        i++;
    }
}

// getting the nth number in series.
int fibo_nth(int n){
    int a[n];
    for (int i=0; i<=n; i++) {
        if (i<=1) {
            a[i] = i;
        } else {
            a[i] = a[i-2] + a[i-1];
        }
    }
    return a[n];
}

int main() {
    fibo(8);
    cout<<endl;
    cout<<fibo_nth(8)<<endl;
    return 0;
}
