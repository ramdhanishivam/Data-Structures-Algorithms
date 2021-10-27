//
//  duplicate_elements_sorted_array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 26/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A[] = {1,1,2,2,3,4,4,5,6};
    int B[] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    for (int i=0; i<9; i++) {
        B[A[i]]++;
    }
    for (int i=1; i<7; i++) {
        if (B[i] > 1) {
            cout<<"Element "<<i<<" is duplicated "<<B[i]<<" times"<<endl;
        }
    }
    
}
