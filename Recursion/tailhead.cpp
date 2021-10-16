//
//  tailhead.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void func1(int n){
    if (n>0) {
        cout<<n<<" ";
        func1(n-1);
        cout<<endl;
    }
}

void func2(int n){
    if (n>0) {
        func2(n-1);
        cout<<n<<" ";
    }
}

int main() {
    int x = 3;
    func1(x);
    func2(x);
    cout<<endl;
    return 0;
}
