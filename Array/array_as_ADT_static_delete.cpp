//
//  array_as_ADT_static_delete.cpp
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

//insert an element at given index of an array.
void insert(struct Array *arr, int index, int val){
    if (index <= arr->length && index >= 0 ) {
        for (int i=arr->length; i>=index; i--) {
            arr->A[i] = arr->A[i-1];// the line performs the shifting of elements in rightward direction.
        }
        arr->A[index] = val; // inserting the element at the index.
        arr->length++; // increment in length of array as new element is inserted.
    }
}

//delete an elelment at given index
int del(struct Array *arr, int index){
    if (index >= 0 && index <= arr->length) {
        int d = arr->A[index];
        for (int i=index; i<= arr->length-1; i++) {
            arr->A[i] = arr->A[i+1]; // the line performs the shifting of elements in left direction.
        }
        arr->length--;// decrement in length of array as an element is deleted.
        return d;// return the deleted element.
    }
    return 0;
}

int main() {
    struct Array arr={{2,4,6,8,10}, 20, 5};
    cout<<del(&arr, 1)<<" is deleted from array."<<endl;
    display(arr);
    return 0;
}
