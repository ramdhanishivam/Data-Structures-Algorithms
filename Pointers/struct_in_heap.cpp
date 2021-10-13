//
//  struct_in_heap.cpp
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
    Rectangle *p;
    // Below line represents dynamic allocation of Structure, which in nothing but to create a
    // structure object in heap.
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // in C++ we only use "new Rectangle" for the above line.
    p->length=123;
    p->breadth=345;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

}
