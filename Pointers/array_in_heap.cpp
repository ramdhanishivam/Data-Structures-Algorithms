//
//  array_in_heap.cpp
//  DSA_Basics
//  array in heap
//  Created by Shivam Ramdhani on 11/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // insert code here...
    
    int *p; // only p will be there in stack memory
    
    p = (int *)malloc(5*sizeof(int)); // array created in heap memory
    // array of 5 integers will be created in heap memory
    // p = new int[5]; In C++
    
    p[0] = 12;p[1] = 102;p[2] = 12;p[3] = 88;p[4] = 1;
    
    for (int i=0; i<5; i++) {
        cout<<p[i]<<endl;
        // in case of an array the pointer acts as the name of an array
    }
    
    // Now that we have dynamically allocated memory,
    // we must release the memory while we have finished using it.
    delete [] p;
    
    return 0;
}
