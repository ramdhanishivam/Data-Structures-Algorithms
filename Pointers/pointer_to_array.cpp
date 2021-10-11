//
//  pointer_to_array.cpp
//  DSA_Basics
//  Pointer to an array
//  Created by Shivam Ramdhani on 11/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // insert code here...
    int A[5] = {2,4,6,8,12};
    int *p;
    p = A; // this is equivalent to p = &A[0]
    for (int i=0; i<5; i++) {
        cout<<p[i]<<endl;
        // in case of an array the pointer acts as the name of an array
    }
    return 0;
}
