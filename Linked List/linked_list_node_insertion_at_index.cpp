//
//  linked_list_node_insertion_at_index.cpp
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

int count_LL_leng(struct Node *linked_list_node){
    int length = 0;
    while (linked_list_node) {
        length++;
        linked_list_node = linked_list_node->next;
    }
    return length;
}

void insert_in_LL(struct Node *linked_list_node, int index, int value)
{
    struct Node *new_node;
    int i;
    if (index < 0 || index > count_LL_leng(linked_list_node)) {
        return;
    }
    new_node = new Node;
    new_node->data = value;
    
    // insert before the first node.
    if (index == 0) {
        new_node->next = first;
        first = new_node;
    } else {
        // insert at given index.
        for (i=0; i< index-1; i++) {
            linked_list_node = linked_list_node->next;
        }
        new_node->next = linked_list_node->next;
        linked_list_node->next = new_node;
    }
}

int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    cout<<"Before Insertion : ";
    display(first);
    cout<<endl;
    cout<<"After Insertion : ";
    insert_in_LL(first,0,5);
    display(first);
    cout<<endl;
    return 0;
}
