//
//  array_in_heap.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 19/10/21.
//


#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// once the array of some size is created its size cannot be altered.


int main() {
    int A[5]; // array in stack memory
    int *p; // pointer in stack memory
    
    // array created in heap memory
    // with size as 5
    // p is the pointer to the array.
    p =(int *)malloc(5*sizeof(int));
    // Also in C++
    // p = new int[5]; // array in heap.
    
    p[0] = 5; // accessing the array in heap using pointer
    // pointer will simply act as array name.
    
    A[0] = 10;
    
    cout<<p[0];
    cout<<endl;
    cout<<A[0];
    cout<<endl;
    
    // in c++
    delete []p;
    // in c lang
    // free(p);
    return 0;
}
