//
//  tree_recursion.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Function using recursion.
void func1(int n){
    if (n>0) {
        cout<<n<<" ";
        func1(n-1);
        func1(n-1);
    }
}

int main() {
    int x = 3;
    func1(x);
    cout<<endl;
    return 0;
}
