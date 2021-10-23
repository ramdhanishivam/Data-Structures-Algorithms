//
//  array_as_ADT_merging_two_arrays.cpp
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

struct Array* Merge(struct Array *arr1, struct Array *arr2 ){
    int i,j,k;
    i=j=k=0;
    
    struct Array *arr3 = new struct Array;
    while (i<arr1->length && j<arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    
    for (; i<arr1->length; i++) {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j<arr2->length; j++) {
        arr3->A[k++] = arr2->A[j];
    }
    
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    
    return arr3;
}

int main() {
    struct Array arr1={{1,2,4,5,6}, 10, 5};
    struct Array arr2={{2,8,9,10,14}, 10, 5};
    struct Array *arr3;
    arr3 = Merge(&arr1, &arr2);
    display(*arr3);
    return 0;
}
