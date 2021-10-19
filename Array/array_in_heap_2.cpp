//
//  array_in_heap_2.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 19/10/21.
//


#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int A[5] = {1,2,3,4,5};
    int *p;
    
    p =(int *)malloc(5*sizeof(int));
    p[0] = 5;
    p[1] = 2;
    p[2] = 4;
    p[3] = 6;
    p[4] = 1;
    
    for (int i=0; i<5; i++) {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<5; i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
