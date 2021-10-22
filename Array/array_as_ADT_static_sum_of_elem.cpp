//
//  array_as_ADT_static_sum_of_elem.cpp
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

int sum_of_all(struct Array arr){
    int sum = 0;
    for (int i=0; i<arr.length; i++) {
        sum = sum + arr.A[i];
    }
    return sum;
}

int main() {
    struct Array arr={{2,1,2,12,3}, 20, 5};
    cout<<"Sum of all elememnts : "<<sum_of_all(arr);
    display(arr);
    return 0;
}
