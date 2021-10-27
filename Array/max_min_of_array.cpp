//
//  max_min_of_array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 26/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A[] = {1,2,3,4,5,6,7};
    int max = A[0];
    int min = A[0];
    for (int i=0; i<7; i++) {
        if (A[i] > max) {
            max = A[i];
        } else if (A[i] < min) {
            min = A[i];
        }
    }
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
}
