//
//  linked_list_middle_node.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 12/11/21.
//

#include <iostream>
#include <cmath>
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

void middle_node(struct Node *p)
{
    for (int i = 0; i<=llround(Length(p)/2); i++) {
        p = p->next;
    }
    cout<<p->data;
}

// this method uses two pointers to find the middle element by doing a single scan.
// in this mehtod we move one pointer by one step & move the other pointer by two steps.
// thus when the two-step pointer reaches the last node, the one-step pointer will reach
// the middle node of linked list.
void middle_node_single_scan(struct Node *p)
{
    struct Node *q;
    q = first;
    while (q) {
        q = q->next;
        if (q) {
            q = q->next;
        }
        if (q) {
            p = p->next;
        }
    }
    cout<<p->data;
}

int main() {
    int A[] = {1,2,3,4,5,6,7,8,9};
    createDoublyLinkedList(A, 9);
    cout<<"Middle Node of Linked List : ";
    middle_node(first);
    cout<<endl;
    cout<<"Middle Node of Linked List : ";
    middle_node_single_scan(first);
    cout<<endl;
    Display(first);
    return 0;
}
