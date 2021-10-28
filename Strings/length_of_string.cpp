//
//  length_of_string.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 27/10/21.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
    char nam[]="Shivam"; // string given with double quotes.
    printf("%s", nam);
    cout<<endl; // give Shivam.
    int i;
    for (i=0; nam[i] != '\0'; i++) {}
    
    cout<<"Length of give string: "<<i;
    cout<<endl;
}
