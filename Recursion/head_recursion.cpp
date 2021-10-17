//
//  head_recursion.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Head Recusion cannot be easily converted into the form of loops.
// But can be converted into loops.
// And functions will not look similar.

// Function using recursion.
void func1(int n){
    if (n>0) {
        func1(n-1);
        cout<<n<<" ";
    }
}

// Function using loop.
void func2(int n){
    int i=1;
    while (i<=n) {
        cout<<i<<" ";
        i++;
    }
}

int main() {
    int x = 3;
    func1(x);
    cout<<endl;
    func2(x);
    cout<<endl;
    return 0;
}
