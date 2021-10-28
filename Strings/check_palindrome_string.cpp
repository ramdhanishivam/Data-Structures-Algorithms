//
//  check_palindrome_string.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 28/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    char A[] = "madam";
    char B[10];
    int i,j;
    for (i=0; A[i] != '\0'; i++) {}
    i = i-1;
    for (j=0; i>=0; j++,i--) {
        B[j] = A[i];
    }
    cout<<B<<endl;
    int x,y;
    for (x=0,y=0; A[x] !='\0' && B[y] !='\0'; x++,y++) {
        if (A[x] != B[y]) {
            break;
        }
    }
    
    if (A[x] == B[y]) {
        cout<<"Palindrome!!"<<endl;
    } else {
        cout<<"Not a Palindrome."<<endl;
    }
    return 0;
}
