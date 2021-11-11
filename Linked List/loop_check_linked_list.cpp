//
//  loop_check_linked_list.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 08/11/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first = NULL;

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

void display(struct Node *linked_list_node)
{
    while (linked_list_node) {
        cout<<linked_list_node->data<<",";
        linked_list_node = linked_list_node->next;
    }
}

int isLoop_LL(struct Node *f){
    struct Node *p, *q;
    p = q = f;
    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : NULL;
    }while(p && q && p!=q);

    if (p == q) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    struct Node *t1, *t2;
    int A[]={3,5,7,10,25};
    create(A, 5);
    display(first);
    cout<<endl;
    
    // t1 will pointing to '7'
    t1 = first->next->next;
    
    // t2 will be pointing to last element '9'
    t2 = first->next->next->next->next;
    
    // it will create a loop in Linked List
    t2->next = t1;
    cout<<isLoop_LL(first);
    cout<<endl;
    return 0;
}
