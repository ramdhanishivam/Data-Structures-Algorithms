//
//  compare_two_string.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 28/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    char A[] = "painter";
    char B[] = "painting";
    int i,j;
    for (i=0,j=0; A[i] != '\0' && B[j] != '\0'; i++, j++) {
        if (A[i] != B[j]) {
            break;
        }
    }
    if (A[i] == B[j]) {
        cout<<"Equal"<<endl;
    } else {
        cout<<"Not Equal"<<endl;
    }
    return 0;
}
