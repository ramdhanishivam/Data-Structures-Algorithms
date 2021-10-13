//
//  pointer_to_structure.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 13/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    Rectangle r = {19,18}; // in C language we must use struct for initialization.
    // Though this is a C++ program we can skip the struct for initialization.
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    
    Rectangle *p = &r;
    // With pointer to a structure, we use arrow operator to access elements of structure.
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    cout<<p<<endl; // Output - 0x16fdff3c8
    cout<<&r<<endl; // Output - 0x16fdff3c8
}
