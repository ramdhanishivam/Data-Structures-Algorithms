//
//  array_as_parameter.cpp
//  DSA_Basics
//  Array is passed by address.
//  Created by Shivam Ramdhani on 13/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Arrays cannot be passed by value at all.
// Thus the formal parameter will be a pointer to an array.

void display(int A[], int n){ // as the A here is pointer, we can pass *A as well
    // but it a general way of pointer representation, to depict it as array for other people
    // to understand we keep it as given. 
    cout<<A<<endl;
    for (int i=0; i<n; i++) {
        cout<<A[i]<<endl;
    }
}

int main() {
    int A[] = {1,2,3,5,7,8,9};
    int len = 7;
    cout<<&A[0]<<endl;
    
    display(A, len);
    
    for(int i:A){
        cout<<i<<" ";
    }
    return 0;
}
