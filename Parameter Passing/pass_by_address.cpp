//
//  pass_by_address.cpp
//  DSA_Basics
//  Parameter Passing - Pass by address
//  Created by Shivam Ramdhani on 13/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10;
    int b = 20;
    swap(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
}
