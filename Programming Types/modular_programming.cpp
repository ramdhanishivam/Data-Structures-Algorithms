//
//  modular_programming.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 14/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

//    we do break this main function into smaller functions.
//    So that's what we will make modules and also it is called procedural programming.

int area(int l, int b){
    return l*b;
}

int perimeter(int l, int b){
    return 2*(l+b);
}


int main() {
    int length=0, breadth=0;
    
    cout<<"Enter length & breadth of rectangle";
    cin>>length>>breadth;
    
    int a = area(length, breadth);
    int peri = perimeter(length, breadth);
    
    printf("Area=%d\nBreadth=%d\n", a, peri);
    
}
