//
//  linked_list_polynomial.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 15/11/21.
//

#include <iostream>
#include <cmath>
using namespace std;

struct Node
{
    int coeff;
    int exp;
    struct Node *next;
}*poly = NULL;

void create()
{
    struct Node *t, *last = NULL;
    int num; // number of terms.
    int i; // iterator to input all the terms
    
    cout<<"Enter the number of terms in the polynomial ";
    cin>>num;
    
    cout<<"Enter all tems's coefficient & exponent ";
    
    for (i=0; i<num; i++) {
        t = new Node; // new node for storing the new term.
        cin>>t->coeff>>t->exp;
        t->next = NULL;
        if (poly == NULL) {
            poly = last = t;
        } else {
            last->next = t;
            last = t;
        }
    }
}

void display(struct Node *p)
{
    while (p) {
        cout<<" "<<p->coeff<<"x"<<p->exp<<" +";
        p = p->next;
    }
    cout<<endl;
}

int evaluate_poly(struct Node *p, int x)
{
    int val = 0;
    while (p) {
        val += p->coeff * pow(x, p->exp);
        p = p->next;
    }
    return val;
}

int main() {
    create();
    display(poly);
    int eval = 0;
    eval = evaluate_poly(poly, 2);
    cout<<"Evaluation of Polynomial : "<<eval<<endl;
    return 0;
}
