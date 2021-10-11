//
//  structure.cpp
//  DSA_Basics
//  Padding of memory explained.
//  Created by Shivam Ramdhani on 11/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

int main() {
    // insert code here...
    struct Rectangle r1 = {10, 8};
    printf("%lu", sizeof(r1));
    cout<<endl;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    return 0;
}
