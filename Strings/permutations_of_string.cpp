//
//  permutations_of_string.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 30/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void permutation(char *main_string, int k){
    static int flag_array[10] = {0};
    static char result_string[] ="";
    int i;
    
    if (main_string[k] == '\0') {
        cout<<result_string<<endl;
    } else {
        for (i=0; main_string[i] != '\0'; i++) {
            if (flag_array[i] == 0) {
                flag_array[i] = 1;
                result_string[k] = main_string[i];
                permutation(main_string, k+1);
                flag_array[i] = 0;
            }
        }
    }
}

int main(){
    char main_string[] = "123";
    permutation(main_string, 0);
}
