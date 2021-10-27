//
//  pair_sum_sorted_array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 26/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int k=10;// a+b=10 i.e pair sum of elements must be 10.
    int A[] = {1,2,3,4,5,6,7};
    int i=0, j=6;
    while (i<j) {
        if (A[i] + A[j] == k) {
            cout<<"("<<A[i]<<","<<A[j]<<") => 10"<<endl;
            i++;
            j--;
        } else if (A[i] + A[j] < k) {
            i++;
        } else {
            j--;
        }
    }
}
