//
//  pointers.cpp
//  DSA_Basics
//  Pointers
//  Created by Shivam Ramdhani on 11/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // insert code here...
    int a = 10;
    int *p; // declaration
    p = &a; // initialization
    cout<<a<<endl;
    cout<<*p<<endl; // dereferencing
    return 0;
}
