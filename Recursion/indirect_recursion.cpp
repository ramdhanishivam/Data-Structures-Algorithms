//
//  indirect_recursion.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void funcB(int n);

// Function using recursion.
void funcA(int n){
    if (n>0) {
        cout<<n<<" ";
        funcB(n-1);
    }
}

// Function using recursion.
void funcB(int n){
    if (n>1) {
        cout<<n<<" ";
        funcA(n/2);
    }
}

int main() {
    int x = 20;
    funcA(x);
    cout<<endl;
    return 0;
}
