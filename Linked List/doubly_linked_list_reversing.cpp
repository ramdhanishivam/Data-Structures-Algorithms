//
//  doubly_linked_list_reversing.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 12/11/21.
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

void reverse_linked_list(struct Node *p)
{
    struct Node *temp;
    
    while (p) {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev; // here the previous pointer becomes the next.
        if (p && p->next == NULL) {
            // making the current last node as first node.
            first = p;
        }
    }
}

int main() {
    int A[] = {23,323,44,66,67};
    createDoublyLinkedList(A, 5);
    reverse_linked_list(first);
    Display(first);
    return 0;
}
