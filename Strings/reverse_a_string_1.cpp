//
//  reverse_a_string_1.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 28/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    char A[] = "Python";
    char B[7];
    int i;
    for (i=0; A[i] != '\0'; i++) {}
    i=i-1;
    int j;
    for (j=0; i>=0; i--,j++) {
        B[j] = A[i];
    }
    B[j] = '\0';
    cout<<B;
    cout<<endl;
}
