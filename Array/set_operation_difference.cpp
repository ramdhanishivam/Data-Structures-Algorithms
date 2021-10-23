//
//  set_operation_difference.cpp
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
struct Array* Difference(struct Array *arr1, struct Array *arr2 ){
    int i,j,k;
    i=j=k=0;
    
    struct Array *arr3 = new struct Array;
    while (i<arr1->length && j<arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else if (arr1->A[i] > arr2->A[j]) {
            j++;
        } else {
            i++;
            j++;
        }
    }
    
    for (; i< arr1->length; i++) {
        arr3->A[k++] = arr1->A[i];
    }
    
    arr3->length = k;
    arr3->size = 10;
    
    return arr3;
}

int main() {
    struct Array arr1={{3 , 4 , 8 , 9 , 11 , 12}, 10, 6};
    struct Array arr2={{1 , 2 , 3 , 4 , 5 }, 10, 5};
    struct Array *arr3;
    arr3 = Difference(&arr1, &arr2);
    display(*arr3);
    return 0;
}
