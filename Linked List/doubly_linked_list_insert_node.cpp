//
//  doubly_linked_list_insert_node.cpp
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

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    
    if (index < 0 || index > Length(p)) {
        return;
    }
    
    // inserting the node before the first node at index '0'.
    if (index == 0) {
        t = new Node();
        t->prev = NULL;
        t->data = x;
        t->next = first;
        first->prev = t;
        first = t;
    } else {
        // inserting the node at given index.
        for (i=0; i<index-1; i++) {
            p = p->next;
        }
        t = new Node;
        t->prev = p;
        t->data = x;
        t->next = p->next;
        if (p->next) {
            p->next->prev = t;
        }
        p->next = t;
    }
}

int main() {
    int A[] = {23,323,44,66,67};
    createDoublyLinkedList(A, 5);
    cout<<"Doubly LL Before Inserting : ";
    Display(first);
    int len = Length(first);
    cout<<"Length of Doubly LL : "<<len<<endl;
    Insert(first, 2, 99);
    cout<<"Doubly LL After Inserting : ";
    Display(first);
    return 0;
}
