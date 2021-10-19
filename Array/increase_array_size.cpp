//
//  increase_array_size.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 19/10/21.
//


#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int *p, *q;
    
    p =(int *)malloc(5*sizeof(int));
    p[0] = 5;
    p[1] = 2;
    p[2] = 4;
    p[3] = 6;
    p[4] = 1;
    
    // create new array in heap with increased size you want.
    q = new int[10];
    
    for (int i=0; i<5; i++) {
        q[i]=p[i];
    }
    
    free(p);
    p = q;
    q = NULL;
    
    for (int i=0; i<5; i++) {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
