//
//  nested_recursion.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Function using recursion.
int funcA(int n){
    if (n>100) {
        return n-10;
    } else{
        return funcA(funcA(n+11));
    }
}


int main() {
    cout<<funcA(95)<<endl;
    return 0;
}
