//
//  Merge_OOP_Program_for_Array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 25/10/21.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Array
{
public:
    int *A;
    int size;
    int length;
    Array()
    {
        size = 10;
        A = new int[size];
        length = 0;
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
//    ~Array()
//    {
//        delete []A;
//    }
    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    Array* Merge(Array arr2);
};

void Array::Display()
{
    for (int i=0; i<length; i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Array::Insert(int index, int x)
{
    if (index>=0 && index<=length) {
        for (int i=length-1; i>index; i--) {
            A[i+1] = A[i];
        }
        A[index] = x;
        length++;
    }
}

int Array::Delete(int index){
    int x=0;
    if (index>=0 && index<length)
    {
        x = A[index];
        for (int i =index; i<length; i++) {
            A[i] = A[i+1];
        }
        length--;
    }
    return x;
}

Array* Array::Merge(Array arr2 ){
    int i,j,k;
    i=j=k=0;
    
    Array *arr3 = new Array(length+arr2.length);
    while (i<length && j<arr2.length) {
        if (A[i] < arr2.A[j]) {
            arr3->A[k++] = A[i++];
        } else {
            arr3->A[k++] = arr2.A[j++];
        }
    }
    
    for (; i<length; i++) {
        arr3->A[k++] = A[i];
    }
    for (; j<arr2.length; j++) {
        arr3->A[k++] = arr2.A[j];
    }
    
    arr3->length = length + arr2.length;
    
    return arr3;
}

int main()
{
    Array *MergedArray;
    Array arr(10);
    Array arr2(10);
    
    arr.Insert(0, 1);
    arr.Insert(1, 3);
    arr.Insert(2, 3);
    arr2.Insert(0, 1);
    arr2.Insert(1, 4);
    arr2.Insert(2, 6);
    arr.Display();
    arr2.Display();
    MergedArray=arr.Merge(arr2);
}
