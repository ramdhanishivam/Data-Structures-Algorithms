//
//  size_of_pointer.cpp
//  DSA_Basics
//  Size of pointer is independent of its data type.
//  Created by Shivam Ramdhani on 11/10/21.
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
    // insert code here...
    
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    
}
