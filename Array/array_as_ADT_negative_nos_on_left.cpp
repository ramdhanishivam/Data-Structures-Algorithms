//
//  array_as_ADT_negative_nos_on_left.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 23/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Array{
    int A[20]; // fixed array size
    int size; // array size
    int length; // number of elements in array
};

void display(struct Array arr){
    int i;
    cout<<endl<<"Elements are : "<<endl;
    for (i=0; i<arr.length; i++) {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

void negative_nos_on_left(struct Array *arr){
    int i=0;
    int j=arr->length - 1;
    while (i<j) {
        while (arr->A[i] < 0) {
            i++;
        }
        while (arr->A[j] >= 0) {
            j--;
        }
        if (i<j) {
            swap(arr->A[i], arr->A[j]);
        }
    }
}

int main() {
    struct Array arr={{1,2,-4,5,-6}, 20, 5};
    negative_nos_on_left(&arr);
    display(arr);
    return 0;
}
