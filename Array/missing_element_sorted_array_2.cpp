//
//  missing_element_sorted_array_2.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 26/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A[] = {1,2,3,4,6,9,10};
    int diff = A[0] - 0;//value minus index
    for (int i=0; i<8; i++) {
        if (A[i] - i != diff) {
            while (diff < A[i] - i) {
                cout<<"Element "<<diff+i<<" is missing."<<endl;
                diff++;
            }
        }
    }
}
