//
//  array_as_ADT_static_append.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 20/10/21.
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

//add element to last of an array.
void append(struct Array *arr, int val){
    if (arr->length < arr->size) {
        arr->A[arr->length++] = val; // element added & increment in length of array.
    }
}

int main() {
    struct Array arr={{2,4,6,8,10}, 20, 5};
    append(&arr, 13);
    display(arr);
    return 0;
}
