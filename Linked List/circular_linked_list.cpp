//
//  circular_linked_list.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 11/11/21.
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*Head;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    Head = new Node;
    Head->data = A[0];
    Head->next = Head; // Circular Linked List.
    last = Head;
    
    for (i=1; i<n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node *h)
{
    do
    {
        cout<<h->data<<" ";
        h = h->next;
    }while(h != Head);
}

void recusrive_display(struct Node *h)
{
    // to enter the (IF) condtion for the first time when h is equal to Head.
    static int flag = 0;
    if (h != Head || flag == 0) {
        flag = 1;
        cout<<h->data<<" ";
        recusrive_display(h->next);
    }
}

int main() {
    int A[] = {2,3,4,5,6};
    create(A,5);
    display(Head);
    cout<<endl;
    recusrive_display(Head);
    cout<<endl;
    return 0;
}
