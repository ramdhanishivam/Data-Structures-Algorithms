//
//  reference.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 13/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    // insert code here...
    int a = 10;
    int &r = a; // reference of a, it is nothing but anothor name given to 'a'
    // reference does not consume memory
    // any modification on 'a' will modify 'r' & vice versa.
    
    a = 24;
    cout<<a<<endl<<r<<endl;
}
