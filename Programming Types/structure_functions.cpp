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

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r){
    return r.length*r.breadth;
}

int perimeter(struct Rectangle r){
    return 2*(r.length+r.breadth);
}


int main() {
    struct Rectangle r;
    
    cout<<"Enter length & breadth of rectangle";
    cin>>r.length>>r.breadth;
    
    int a = area(r);
    int peri = perimeter(r);
    
    printf("Area=%d\nBreadth=%d\n", a, peri);
    
}
