//
//  duplicate_characters_in_string_hashing.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 28/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    char a[] = "findingiigggg";
    char hash[30]= "00000000000000000000000000";
    int i,j;
    for (i=0; a[i] != '\0'; i++) {
        hash[a[i] - 97]++;
    }
    for (j=0; hash[j] != '\0'; j++) {
        if (hash[j] > 49) {
            cout<<"Count of '";
            printf("%c", j+97);
            cout<<"' in given string => "<<hash[j]<<endl;
        }
    }
    return 0;
}
