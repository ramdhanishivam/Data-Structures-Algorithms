//
//  diagonal_matrix_oop.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 31/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Diagonal
{
private:
    int n; // dimension
    int *A; // for creating a dynamic array.
    
public:
    Diagonal(){
        this->n = 2;
        A = new int(2);
    }
    
    Diagonal(int n)
    {
        this->n = n;
        A = new int(n);
    }
    
    void Set(int i, int j, int value);
    
    int Get(int i, int j);
    
    void Display();
    
    ~ Diagonal()
    {
        delete []A;
    }
};

void Diagonal::Set(int i, int j, int value)
{
    if(i == j)
    {
        A[i-1] = value;
    }
}

int Diagonal::Get(int i, int j)
{
    if (i == j)
    {
        return A[i-1];
    } else {
        return 0;
    }
}

void Diagonal::Display()
{
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i==j) {
                cout<<" "<<A[i];
            } else {
                cout<<" 0";
            }
        }
        cout<<endl;
    }
}

int main()
{
    Diagonal diagonal_matrix(4);
    diagonal_matrix.Set(1, 1, 4);
    diagonal_matrix.Set(2, 2, 8);
    diagonal_matrix.Set(3, 3, 5);
    diagonal_matrix.Set(4, 4, 9);
    
    diagonal_matrix.Display();
    
    cout<<"Elelment at (3,3) => "<<diagonal_matrix.Get(3, 3)<<endl;
    return 0;
}
