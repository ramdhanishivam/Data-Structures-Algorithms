//
//  sparse_matrix_addition.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 06/11/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Element
{
    int row_number;
    int col_number;
    int element_value;
};

struct Sparse
{
    int number_of_rows;
    int number_of_cols;
    int number_of_non_zero_elements;
    struct Element *elements; // for array of elements.
};

void create(struct Sparse *matrix){
    cout<<"Enter Dimensions of the matrix : "<<endl;
    cin>>matrix->number_of_rows>>matrix->number_of_cols;
    
    cout<<"Enter total number of non-zero elements"<<endl;
    cin>>matrix->number_of_non_zero_elements;
    
    matrix->elements = new Element[matrix->number_of_non_zero_elements];
    
    cout<<"Enter the non-zero elements with row & column no :"<<endl;
    
    for (int i=0; i < matrix->number_of_non_zero_elements; i++) {
        cin>>matrix->elements[i].row_number>>matrix->elements[i].col_number>>matrix->elements[i].element_value;
    }
    cout<<endl;
}

void display(struct Sparse matrix){
    int i,j,k=0;
    for (i=0; i< matrix.number_of_rows; i++) {
        for (j=0; j< matrix.number_of_cols; j++) {
            if (i == matrix.elements[k].row_number && j == matrix.elements[k].col_number) {
                cout<<" "<<matrix.elements[k++].element_value<<" ";
            } else {
                cout<<" 0 ";
            }
        }
        cout<<endl;
    }
}

struct Sparse * addition(struct Sparse *matrix_1, struct Sparse *matrix_2)
{
    if (matrix_1->number_of_rows != matrix_2->number_of_rows || matrix_1->number_of_cols != matrix_2->number_of_cols) {
        return NULL;
    }
    struct Sparse *matrix_sum;
    int i,j,k;
    i=j=k=0;
    matrix_sum = new Sparse;
    matrix_sum->elements = new Element[matrix_1->number_of_non_zero_elements + matrix_2->number_of_non_zero_elements];
    while (i< matrix_1->number_of_non_zero_elements && j< matrix_2->number_of_non_zero_elements) {
        
        if (matrix_1->elements[i].row_number < matrix_2->elements[j].row_number) {
            matrix_sum->elements[k++] = matrix_1->elements[i++];
        } else if (matrix_1->elements[i].row_number > matrix_2->elements[j].row_number) {
            matrix_sum->elements[k++] = matrix_2->elements[j++];
        } else {
            if (matrix_1->elements[i].col_number < matrix_2->elements[j].col_number) {
                matrix_sum->elements[k++] = matrix_2->elements[i++];
            } else if (matrix_1->elements[i].col_number > matrix_2->elements[j].col_number) {
                matrix_sum->elements[k++] = matrix_2->elements[j++];
            } else {
                matrix_sum->elements[k] = matrix_1->elements[i];
                matrix_sum->elements[k++].element_value = matrix_1->elements[i++].element_value + matrix_2->elements[j++].element_value;
            }
        }
    }
    for (; i< matrix_1->number_of_non_zero_elements; i++) {
        matrix_sum->elements[k++] = matrix_1->elements[i];
    }
    for (; j< matrix_2->number_of_non_zero_elements; j++) {
        matrix_sum->elements[k++] = matrix_2->elements[j];
    }
    matrix_sum->number_of_rows = matrix_1->number_of_rows;
    matrix_sum->number_of_cols = matrix_1->number_of_cols;
    matrix_sum->number_of_non_zero_elements = k;
    return matrix_sum;
}

int main()
{
    struct Sparse matrix_1,matrix_2, *matrix_sum;
    create(&matrix_1);
    create(&matrix_2);
    cout<<"Matrix - 1 : "<<endl;
    display(matrix_1);
    cout<<"Matrix - 2 : "<<endl;
    display(matrix_2);
    
    matrix_sum = addition(&matrix_1, &matrix_2);
    cout<<"Matrix - Sum : "<<endl;
    display(*matrix_sum);
    
    return 0;
}
