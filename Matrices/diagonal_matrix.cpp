//
//  diagonal_matrix.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 31/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Matrix
{
    int A[10];
    int n; // dimension
};

void Set(struct Matrix *m, int i, int j, int value)
{
    if(i == j)
    {
        m->A[i-1] = value;
    }
}

int Get(struct Matrix m, int i, int j)
{
    if (i == j)
    {
        return m.A[i-1];
    } else {
        return 0;
    }
}

void Display(struct Matrix m)
{
    int i,j;
    for (i=0; i<m.n; i++) {
        for (j=0; j<m.n; j++) {
            if (i==j) {
                cout<<" "<<m.A[i];
            } else {
                cout<<" 0";
            }
        }
        cout<<endl;
    }
}

int main()
{
    struct Matrix m;
    m.n = 4;
    Set(&m, 1, 1, 2);
    Set(&m, 2, 2, 3);
    Set(&m, 3, 3, 4);
    Set(&m, 4, 4, 5);
    
    Display(m);
    
    cout<<"Elelment at (3,3) => "<<Get(m, 3, 3)<<endl;
    return 0;
}
