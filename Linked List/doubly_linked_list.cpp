//
//  doubly_linked_list.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 11/11/21.
//

#include <iostream>
using namespace std;

struct Node
{
    // DoublyLinkedList Node
    struct Node *prev;
    int data;
    struct Node *next;
}*first = NULL;

void createDoublyLinkedList(int A[], int n)
{
    struct Node *t, *last;
    int i;
    
    // create a first node of Doubly LL.
    first = new Node;
    first->prev = NULL;
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    // create remaining nodes of Doubly LL.
    for (i=1; i<n; i++) {
        t = new Node();
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while (p) {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int Length(struct Node *p)
{
    int length = 0;
    while (p) {
        length++;
        p = p->next;
    }
    return length;
}

int main() {
    int A[] = {23,323,44,66,67};
    createDoublyLinkedList(A, 5);
    Display(first);
    int len = Length(first);
    cout<<"Length of Doubly LL : "<<len<<endl;
    return 0;
}
