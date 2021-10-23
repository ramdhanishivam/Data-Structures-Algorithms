//
//  array_as_ADT_reversing_array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 22/10/21.
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

// using auxillary array - reversing an array
void reverse_array(struct Array *arr){
    int B[arr->size]; //auxillary array.
    for (int i = arr->length-1, j=0; i >= 0; i--, j++) {
        B[j] = arr->A[i];
    }
    for (int i=0; i<arr->length; i++) {
        arr->A[i] = B[i];
    }
}

// using swaping - reversing the array
void reverse_array2(struct Array *arr){
    int temp;
    for (int i=0,j=arr->length-1; i<j; i++,j--) {
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

int main() {
    struct Array arr={{2,1,2,12,3}, 20, 5};
    display(arr);
//    reverse_array(&arr);
    reverse_array2(&arr);
    display(arr);
    return 0;
}
