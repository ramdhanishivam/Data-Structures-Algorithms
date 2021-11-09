//
//  linked_list_SortedInsert.cpp
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
}*first = NULL, *last_node = NULL;

// This function will always insert a new node to the last of LL.
// Also, it will help in creating a LL with zero elements.
void create(int value)
{
    struct Node *new_node;
    new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;
    if (first == NULL) {
        first = last_node = new_node;
    } else {
        last_node->next = new_node;
        last_node = new_node;
    }
    
}

void display(struct Node *linked_list_node)
{
    while (linked_list_node) {
        cout<<linked_list_node->data<<",";
        linked_list_node = linked_list_node->next;
    }
}

void SortedInsert(struct Node *traversal_node, int new_value)
{
    struct Node *new_node, *previous_node = NULL;
    
    //create new node for insertion.
    new_node = new Node;
    new_node->data = new_value;
    new_node->next = NULL;
    
    if (first == NULL) {
        first = new_node; // zero elements in list, so adding new node as first.
    } else {
        while (traversal_node && traversal_node->data < new_value) {
            previous_node = traversal_node;
            traversal_node = traversal_node->next;
        }
        if (traversal_node == first) { // if new element is smaller than first element.
            new_node->next = first; // point the linker of new node to first.
            first = new_node; // new node becomes the first node.
        } else {
            new_node->next = previous_node->next; // copy the linker of prev node to new node linker.
            previous_node->next = new_node; // insert new node after the prev node.
        }
    }
}

int main()
{
    create(10);
    create(20);
    
    display(first);
    SortedInsert(first, 5);
    cout<<endl;
    display(first);
    cout<<endl;
    SortedInsert(first, 15);
    display(first);
    cout<<endl;
    SortedInsert(first, 1);
    display(first);
    cout<<endl;
    return 0;
}
