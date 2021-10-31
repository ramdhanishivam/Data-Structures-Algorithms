//
//  permutation_recusrion_swap_string.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 30/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void permutation_recusrion_swap(char *main_string, int l, int h){
    
    int i;
    
    if (l == h) {
        cout<<main_string<<",";
    } else {
        for (i=l; i<=h; i++) {
            swap(main_string[l], main_string[i]);
            permutation_recusrion_swap(main_string, l+1, h);
            swap(main_string[l], main_string[i]);
        }
    }
}

int main(){
    char main_string[] = "abc";
    int i;
    for (i = 0 ; main_string[i] != '\0'; i++) {
    }
    permutation_recusrion_swap(main_string, 0, i-1);
    cout<<endl;
}
