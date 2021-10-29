//
//  duplicate_characters_in_string_bitwise.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 29/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    char a[] = "finding";
    int hash = 0;
    int check = 0;
    int i;
    char last_duplicate = ' ';
    for (i=0; a[i] != '\0'; i++) {
        check = 1;
        check = check<<(a[i]-97);
        if ((hash & check)>0 && last_duplicate != a[i] ) {
            cout<<a[i]<<" is duplicate."<<endl;
            last_duplicate = a[i];
        } else {
            hash = hash | check;
        }
    }
    return 0;
}
