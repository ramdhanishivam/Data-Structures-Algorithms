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
    // Here we figure out the length of string. i.e 'i'
    for (i=0; A[i] != '\0'; i++) {}
    i = i-1; // length of the string
    for (j=0; i>=0; j++,i--) {
        B[j] = A[i]; // store the reverse of string in a array. i.e 'B'
    }
    cout<<B<<endl;
    int x,y;
    // In below loop we compare whether each character of both string A & B are equal or not.
    for (x=0,y=0; A[x] !='\0' && B[y] !='\0'; x++,y++) {
        if (A[x] != B[y]) {
            break;
        }
    }
    
    // Final Check for Palindrome.
    if (A[x] == B[y]) {
        cout<<"Palindrome!!"<<endl;
    } else {
        cout<<"Not a Palindrome."<<endl;
    }
    return 0;
}
