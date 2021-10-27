//
//  pair_sum_hashing.cpp
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
    int Hash[] = {0,0,0,0,0,0,0,0,0};
    for (int i=0; i<8; i++) {
        if (Hash[k-A[i]] > 0) {
            cout<<"("<<A[i]<<","<<k-A[i]<<") => 10"<<endl;
        }
        Hash[A[i]]++;
    }
}
