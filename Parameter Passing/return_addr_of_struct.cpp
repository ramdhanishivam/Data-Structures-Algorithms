//
//  return_addr_of_struct.cpp
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

// object is created by 'set_rect_values()' function and it is taken by 'main()' function and it is printing.
struct Rectangle * set_rect_values(){
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 100;
    p->breadth = 50;
    
    return p; // returns addr of a structure.
}

int main() {
    struct Rectangle *ptr = set_rect_values();
    cout<<ptr->length<<endl;
    cout<<ptr->breadth<<endl;
    return 0;
}
