//
//  doubly_linked_list_delete_node.cpp
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

int delete_node(struct Node *p, int index)
{
    int i,x=0;
    if (index < 1 || index > Length(p)) {
        return -1;
    }
    
    if (index == 1) {
        first = first->next;
        if (first) {
            first->prev = NULL;
        }
        x = p->data;
        delete p;
    } else {
        for (i=0; i<index-1; i++) {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next) {
            p->next->prev = p->prev;
        }
        x = p->data;
        delete p;
    }
    return x;
}

int main() {
    int A[] = {23,323,44,66,67};
    createDoublyLinkedList(A, 5);
    cout<<"Doubly LL Before Inserting : ";
    Display(first);
    int len = Length(first);
    cout<<"Length of Doubly LL : "<<len<<endl;
    delete_node(first, 2);
    cout<<"Doubly LL After Deleting : ";
    Display(first);
    return 0;
}
