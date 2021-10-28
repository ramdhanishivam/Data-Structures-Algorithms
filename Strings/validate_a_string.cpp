//
//  validate_a_string.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 28/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int validate_string(char *sentence){
    int i;
    for (i=0; sentence[i] != '\0'; i++) {
        if (!(sentence[i] >= 65 && sentence[i] <= 90) &&
            !(sentence[i] >= 97 && sentence[i] <= 122) &&
            !(sentence[i] >= 48 && sentence[i] <= 57)) {
            return 0;
        }
    }
    return 1;
}

int main(){
    
    char *sentence="Poetry034";
    
    cout<<validate_string(sentence);
    cout<<endl;
}
