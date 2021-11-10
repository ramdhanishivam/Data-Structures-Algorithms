//
//  concat_linked_list.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 10/11/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL, *second = NULL;

void create(int A[], int num_of_elements)
{
    int i;
    struct Node *t, *last_node;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last_node = first;
    
    for (i=1; i<num_of_elements; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last_node->next = t;
        last_node = t;
    }
}

void create2(int A[], int num_of_elements)
{
    int i;
    struct Node *t, *last_node;
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last_node = second;
    
    for (i=1; i<num_of_elements; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last_node->next = t;
        last_node = t;
    }
}

void display(struct Node *linked_list_node)
{
    while (linked_list_node) {
        cout<<linked_list_node->data<<",";
        linked_list_node = linked_list_node->next;
    }
}

struct Node *concat_linked_list(struct Node *p, struct Node *q)
{
    p = first;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = second;
    second = NULL;
    return first;
}

int main()
{
    int A[]={0,4,7};
    int B[]={1,3,5,6};
    create(A, 3);
    create2(B, 4);
    display(first);
    cout<<endl;
    display(second);
    cout<<endl;
    first = concat_linked_list(first, second);
    display(first);
    cout<<endl;
    return 0;
}
