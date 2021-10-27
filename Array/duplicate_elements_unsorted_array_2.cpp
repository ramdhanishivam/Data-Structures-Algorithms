//
//  duplicate_elements_unsorted_array_2.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 26/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int count;
    int A[] = {8,3,6,4,6,5,6,8,2,7};
    for (int i=0; i<9; i++) {
        if (A[i] != -1) {
            count = 1;
            for (int j=i+1; j<10; j++) {
                if (A[i] == A[j] && A[j] != -1) {
                    count++;
                    A[j] = -1;
                }
            }
            if (count>1) {
                cout<<"Element "<<A[i]<<" is "<<count<<" times duplicated"<<endl;
            }
        }
    }
    
}
