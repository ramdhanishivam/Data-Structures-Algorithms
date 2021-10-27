//
//  duplicate_elements_sorted_array_2.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 26/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A[] = {1,2,2,3,4,4,5,6,7};
    int last_duplicate = 0;
    for (int i=0; i<9; i++) {
        if (A[i] == A[i+1] && last_duplicate != A[i]) {
            cout<<"Duplicate element is: "<<A[i]<<endl;
            last_duplicate = A[i];
        }
    }
    
}
