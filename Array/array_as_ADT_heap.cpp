//
//  array_as_ADT_heap.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 20/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    cout<<endl<<"Elements are : "<<endl;
    for (i=0; i<arr.length; i++) {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int main() {
    struct Array arr;
    int n,i;
    cout<<"Enter Size of an array : ";
    cin>>arr.size;
    
    arr.A = new int[arr.size];
    arr.length = 0;
    
    cout<<"Enter how many numbers should be an array : ";
    cin>>n;
    
    cout<<"Enter all numbers in array : ";
    for (i=0; i<n; i++) {
        cin>>arr.A[i];
    }
    arr.length = n;
    
    display(arr);
    return 0;
}
