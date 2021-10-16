//
//  static_global_variable_recursion.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// int x = 5 // Global Variable
// There will only one copy of static/global created
// number of copies are created for other types of variable for each function call activation
// record.

int func1(int n){
    static int x;
    if (n>0) {
        x++;
        return func1(n-1)+x;
    }
    return 0;
}

int main() {
    int x = 5;
    cout<<func1(x);
    cout<<endl;
    return 0;
}
