//
//  lower_triangualr_matrix.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 31/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Matrix
{
    int *A;
    int n; // dimension
};

void Set(struct Matrix *m, int i, int j, int value)
{
    if(i >= j)
    {
        m->A[i*(i-1)/2 + j -1] = value;
    }
}

int Get(struct Matrix m, int i, int j)
{
    if (i >= j)
    {
        return m.A[i*(i-1)/2 + j -1];
    } else {
        return 0;
    }
}

void Display(struct Matrix m)
{
    int i,j;
    for (i=1; i<=m.n; i++) {
        for (j=1; j<=m.n; j++) {
            if (i>=j) {
                cout<<"   "<<m.A[i*(i-1)/2+j-1];
            } else {
                cout<<"     0";
            }
        }
        cout<<endl;
    }
}

int main()
{
    struct Matrix m;
    
    cout<<"Enter Dimension: ";
    cin>>m.n;
    
    m.A = new int(m.n*(m.n+1)/2);

    Set(&m, 1, 1, 222);
    Set(&m, 2, 1, 266);
    Set(&m, 2, 2, 399);
    Set(&m, 3, 1, 664);
    Set(&m, 3, 2, 774);
    Set(&m, 3, 3, 478);
    Set(&m, 4, 1, 599);
    Set(&m, 4, 2, 506);
    Set(&m, 4, 3, 547);
    Set(&m, 4, 4, 155);
    
    Display(m);
    
    cout<<"Elelment at (3,3) => "<<Get(m, 3, 3)<<endl;
    return 0;
}
