//
//  pair_sum.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 26/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int k=10;// a+b=10 i.e pair sum of elements must be 10.
    int A[] = {8,3,6,4,5,2,7};
    for (int i=0; i<9; i++) {
        for (int j=i+1; j<10; j++) {
            if (A[i]+A[j] == k) {
                cout<<"("<<A[i]<<","<<A[j]<<") => 10"<<endl;
            }
        }
    }
    
}
