//
//  anagram_using_hashing.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 30/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    char a[] = "decimal";
    char b[] = "medica1";
    
    int hash[26] = {0};
    
    int i;
    for (i=0; a[i] != '\0'; i++) {
        hash[a[i] - 97] += 1;
    }
    for (i=0; b[i] != '\0'; i++) {
        hash[b[i] - 97] -= 1;
        if (hash[b[i] - 97] < 0) {
            cout<<"String are not anagram"<<endl;
            break;
        }
    }
    if (a[i] == '\0') {
        cout<<"String are anagram"<<endl;
    }
}
