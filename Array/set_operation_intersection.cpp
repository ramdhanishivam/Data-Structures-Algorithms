//
//  set_operation_intersection.cpp
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

// Prerequsite - Sorted array
// It uses merging with help of auxilary array.
struct Array* Intersection(struct Array *arr1, struct Array *arr2 ){
    int i,j,k;
    i=j=k=0;
    
    struct Array *arr3 = new struct Array;
    while (i<arr1->length && j<arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            i++;
        } else if (arr1->A[i] > arr2->A[j]) {
            j++;
        } else {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    
    arr3->length = k;
    arr3->size = 10;
    
    return arr3;
}

int main() {
    struct Array arr1={{2,5,9,15,19}, 10, 5};
    struct Array arr2={{8, 9, 10, 13, 15, 17}, 10, 6};
    struct Array *arr3;
    arr3 = Intersection(&arr1, &arr2);
    display(*arr3);
    return 0;
}
