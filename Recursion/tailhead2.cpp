//
//  tailhead2.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 16/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int func1(int n){
    if (n>0) {
        return func1(n-1)+n;
    }
    return 0;
}

int main() {
    int x = 5;
    cout<<func1(x);
    cout<<endl;
    return 0;
}
