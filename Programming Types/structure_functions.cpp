//
//  structure_functions.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 14/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

//    Now, we know that the length & breadth are the properties of a rectangle.
//    Why not combine thier declaration into a structure.

//    This program depicts how structure & functions lead to better programming way.

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r){
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r){
    return 2*(r.length+r.breadth);
}


int main() {
    struct Rectangle r;
    int l,b;
    
    cout<<"Enter length & breadth of rectangle";
    cin>>l>>b;
    
    initialize(&r, l, b);
    
    int a = area(r);
    int peri = perimeter(r);
    
    printf("Area=%d\nBreadth=%d\n", a, peri);
    
}
