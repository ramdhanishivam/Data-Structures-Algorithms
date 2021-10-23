//
//  array_as_ADT_check_sorted_array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 23/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Array{
    int A[20]; //fixed array size
    int size; // array size
    int length; //number of elements in array
};

void display(struct Array arr){
    int i;
    cout<<endl<<"Elements are : "<<endl;
    for (i=0; i<arr.length; i++) {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int check_sorted_array(struct Array arr){
    for (int i=0; i<arr.length-1; i++) {
        if (arr.A[i] > arr.A[i+1]) {
            return -1;
        }
    }
    return 1;
}

int main() {
    struct Array arr={{1,2,4,5,6}, 20, 5};
    cout<<check_sorted_array(arr);
    display(arr);
    return 0;
}
