//
//  array_as_ADT_static_BinarySearch.cpp
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

//swap function
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// linear search
int LinearSearch(struct Array *arr, int key){
    for (int i=0; i<arr->length; i++) {
        if (key == arr->A[i]) {
            // improving LinSearch with transposition
            // swap(&arr->A[i], &arr->A[i-1]);
            // return i-1;
            // improving LinSearch with moveToHead
            // swap(&arr->A[i], &arr->A[0]);
            // return 0;
            return i;
        }
    }
    return -1;
}

int AlgoBinarySearch( struct Array arr, int key){
    int l,mid,h;
    l = 0;
    h = arr.length -1;
    while (l<=h) {
        mid = (l+h)/2;
        if (key == arr.A[mid]) {
            return mid;
        } else if (key < arr.A[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int main() {
    struct Array arr={{2,4,6,8,10}, 20, 5};
    cout<<AlgoBinarySearch(arr, 10);
    display(arr);
    return 0;
}
