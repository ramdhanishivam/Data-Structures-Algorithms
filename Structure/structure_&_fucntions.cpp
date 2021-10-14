//
//  structure_&_fucntions.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 14/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

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

void change_length(struct Rectangle *r, int l){
    r->length = l;
}

int main() {
    struct Rectangle r;
    int area_value;
    initialize(&r, 10, 20);
    area_value = area(r);
    cout<<"area : "<<area_value<<endl;
    change_length(&r, 5);
    cout<<"new length : "<<r.length<<endl;
    return 0;
}
