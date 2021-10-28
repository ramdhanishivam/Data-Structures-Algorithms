//
//  char_&_strings.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 27/10/21.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    // ASCII Codes(Subset of Unicode)
    // 0 - 127 codes for all the characters on keyboard.
    // A - 65, B - 66 ...... Z - 90
    // a - 97, b - 98 .......z - 122
    // 0 - 48, 1 - 49, 2 - 50 ........ 9 - 57
    
    // Total 128 ASCII Codes
    // To Represent any ASCII code/symbol 7 bits are sufficient.
    // 2(7) - {0 - 127}
    
    // 1. How a character is represented?
    // 2. What is character array?
    
    char temp; // it takes 1byte if memory.
    temp = 'A'; // in memeory ASCII Code is stored i.e 65 here.
    // temp = 'AB' // will give error.
    // temp = A // will give error.
    // temp = "A" // will give error.
    
    printf("%c", temp); // gives A.
    cout<<endl;
    printf("%d", temp); // give 65 i.e ASCII code.
    cout<<endl;
    cout<<temp; // gives A.
    cout<<endl;
    
    // Character Array.
    // char X[5]; // declaration without initialization.
    char Y[5] = {'A','B','C','D','E'};
    char Z[] = {'A','B','C','D','E'};
    char F[5] = {65,66,67,68,69};
    char G[5] = {'A','B'};
    
    cout<<Y; // gives ABCDE.
    cout<<endl;
    
    cout<<Z; // gives ABCDE.
    cout<<endl;
    
    cout<<F; // gives ABCDE.
    cout<<endl;
    
    cout<<G; // gives AB.
    cout<<endl;
    
    char name[10] = {'j','o','h','n','\0'}; // string terminator/demlimiter represents end of string.
    printf("%s", name);
    cout<<endl; // give john.
    
    char nam[]="Shivam"; // string given with double quotes.
    printf("%s", nam);
    cout<<endl; // give Shivam.
    
    char monument[10];
    cout<<"Enter the Mounument Name: "<<endl;
    gets(monument); // give input as Taj Mahal i.e a string with space between two words.
    printf(" Monument Name is %s", monument);
    cout<<endl;
}
