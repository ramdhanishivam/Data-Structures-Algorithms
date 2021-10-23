//
//  array_as_ADT_insert_in_sorted_array.cpp
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

void insert_in_sorted_array(struct Array *arr, int value){
    int i = arr->length - 1; // starting with the last element
    while (arr->A[i] > value) {
        arr->A[i+1] = arr->A[i]; // shifting left element to right
        i--;
    }
    arr->length++; // incrementing the length as new element is to inserted.
    arr->A[i+1] = value; // inserting element in its position.
}

void insert_in_sorted_array2(struct Array *arr, int value){
    int i = arr->length - 1; // starting with the last element
    if (arr->length == arr->size) {
        return;
    }
    while (arr->A[i] > value) {
        arr->A[i+1] = arr->A[i]; // shifting left element to right
        i--;
    }
    arr->A[i+1] = value; // inserting element in its position.
    arr->length++; // incrementing the length as new element is to inserted.
}

int main() {
    struct Array arr={{1,2,4,5,6}, 20, 5};
    insert_in_sorted_array2(&arr, 3);
    display(arr);
    return 0;
}
