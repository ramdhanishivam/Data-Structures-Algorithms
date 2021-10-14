//
//  struct_as_param_pass_by_value.cpp
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

void fun(struct Rectangle r){
    r.length = 15; // this modification will not affect the actual param.
    cout<<"Length - "<<r.length<<endl<<"Breadth - "<<r.breadth<<endl;
}

int main() {
    struct Rectangle r = {10, 15};
    fun(r); // Structure as parameter - pass by value.
    printf("Length: %d \nBreadth: %d \n", r.length, r.breadth);
    return 0;
}
