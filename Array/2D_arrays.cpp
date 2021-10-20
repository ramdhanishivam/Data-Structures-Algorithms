//
//  2D_arrays.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 19/10/21.
//


#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // method 1 - completely in stack
    int S[3][4] = {{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    
    // method 2 - partially in stack & heap
    int *A[3];
    int **C; // method 3 - completely in heap.
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    
    
    // method 3 - only double pointer is declared in stack.
    // rest the pointer to the array in heap will also be created in heap.
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
    
    for (int i = 0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cout<<" "<<S[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cout<<" "<<A[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    
    for (int i = 0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cout<<" "<<C[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
