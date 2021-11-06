//
//  sparse_matrix_create_display.cpp
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
    for (i=0; i<= matrix.number_of_rows; i++) {
        for (j=0; j<= matrix.number_of_cols; j++) {
            if (i == matrix.elements[k].row_number && j == matrix.elements[k].col_number) {
                cout<<" "<<matrix.elements[k++].element_value<<" ";
            } else {
                cout<<" 0 ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    struct Sparse matrix;
    create(&matrix);
    display(matrix);
    return 0;
}
