//
//  duplicate_characters_in_string.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 28/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    char a[] = "findingiigggg";
    int i,j;
    int count;
    char last_duplicate= ' ';
    for (i=0; a[i] != '\0'; i++) {
        if (last_duplicate != a[i] && a[i] != '1') {
            count =1;
            for (j=i+1; a[j] != '\0'; j++) {
                if (a[i] == a[j]) {
                    last_duplicate = a[j];
                    count++;
                    a[j] = '1';
                }
            }
            if(count > 1){
                cout<<"Count of '"<<a[i]<<"' in given string => "<<count<<endl;
            }
        }
    }
    return 0;
}
