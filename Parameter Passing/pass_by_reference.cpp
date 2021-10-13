//
//  pass_by_reference.cpp
//  DSA_Basics
//  Parameter Passing - Pass by Reference - On in C++
//  Created by Shivam Ramdhani on 13/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Here the swap function's machine code will be pasted in main function.
// Thus it will directly access the variables of main function & modify them.
// Though the program looks modular/procedural, under the hood it is monolithic machine code.
// i.e modifying the actual parameters.

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
}
