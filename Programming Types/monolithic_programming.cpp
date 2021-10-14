//
//  monolithic_programming.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 14/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// as this is a monolithic program, we will write all instructions in one function i.e 'main'
int main() {
    int length=0, breadth=0;
    
    cout<<"Enter length & breadth of rectangle";
    cin>>length>>breadth;
    
    int area = length*breadth;
    int peri = 2*(length+breadth);
    
    printf("Area=%d\nBreadth=%d\n", area, peri);
    
}
