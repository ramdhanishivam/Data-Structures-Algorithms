//
//  function_returns_array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 13/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;


int * fun(int size){
    int *p;
    p = new int[size];
    for (int i=0; i<size; i++) {
        p[i] = i+34;
    }
    return p;
}

int main() {
    int *ptr;
    ptr = fun(10);
    for (int i=0; i<10; i++) {
        cout<<ptr[i]<<" ";
    }
    return 0;
}
