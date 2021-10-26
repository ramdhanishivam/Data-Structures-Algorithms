//
//  missing_elements_unsorted_array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 26/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int index;
    int A[] = {8,11,1,2,3,4,6,9,10};
    int B[] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    for (int i=0; i<9; i++) {
        index = A[i];
        B[index]++;
    }
    for (int i=1; i<12; i++) {
        if (B[i] == 0) {
            cout<<"Element "<<i<<" is missing"<<endl;
        }
    }
    
}
