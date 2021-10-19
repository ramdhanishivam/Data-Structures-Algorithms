//
//  static_dynamic_array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 19/10/21.
//


#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // the size of the array is decided at the compile time
    // though the memory will be allocated at the runtime only.
    // in C lang the size of an array has to decided at compile time
    // but in C++ the size of an array can be decided at runtime.
    // array will be created in stack memory.
    
    int A[5]; // size known at compile time.
    int n;
    cin>>n;
    int B[n];// // unknown size, which will be known at runtime i.e only in c++
    cout<<sizeof(B);
    cout<<endl;
    cout<<sizeof(A);
    cout<<endl;
    return 0;
}
