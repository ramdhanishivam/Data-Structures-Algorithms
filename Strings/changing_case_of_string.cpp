//
//  changing_case_of_string.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 27/10/21.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    char nam[]="SHIVAM"; // string given with double quotes.
    printf("%s", nam);
    cout<<endl; // give Shivam.
    int i;
    for (i=0; nam[i] != '\0'; i++) {
        nam[i] = nam[i] + 32; // upper case to lower case. Remeber the difference
        // between a lower case & uppercase letter is 32. here i.e 97-65 = 32
    }
    
    cout<<"lower Case: "<<nam;
    cout<<endl;
}
