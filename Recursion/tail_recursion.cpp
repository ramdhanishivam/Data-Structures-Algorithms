//
//  tail_recursion.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Tail Recusion can be easily converted into the form of loops.
// Both functions look much similar.

// Intresting Point to know, few compilers under the hood convert the Tail recursion
// into loops, thus the space complexity overhead is optimized by compiler itself.

// Function using recursion.
// space complexity - O(n)
// time complexity - O(n)
void func1(int n){
    if (n>0) {
        cout<<n<<" ";
        func1(n-1);
    }
}

// Function using loop.
// space complexity - O(1)
// time complexity - O(n)
void func2(int n){
    while (n>0) {
        cout<<n<<" ";
        n--;
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
