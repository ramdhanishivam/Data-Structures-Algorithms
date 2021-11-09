//
//  linked_list_deleting_element.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 09/11/21.
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

int count_LL_leng(struct Node *linked_list_node){
    int length = 0;
    while (linked_list_node) {
        length++;
        linked_list_node = linked_list_node->next;
    }
    return length;
}

// deleting an element at given index.
int delete_ele(struct Node *traversal_node, int index)
{
    struct Node *temp_node=NULL;
    int store = -1, i;
    
    // here we consider the first node is at index '1'.
    if (index < 1 || index > count_LL_leng(traversal_node)) {
        return -1;
    }
    if (index == 1) {
        temp_node = first;
        store = first->data;
        first = first->next;
        delete temp_node;
        return store;
    } else {
        for (i=0; i< index-1; i++) {
            temp_node = traversal_node;
            traversal_node = traversal_node->next;
        }
        temp_node->next = traversal_node->next; // temp node is acting as previous node.
        store = traversal_node->data;
        delete temp_node;
        return store;
    }
}


int main()
{
    create(10); // element at index 1
    create(20); // element at index 2
    create(201); // element at index 3
    create(120); // element at index 4
    display(first);
    cout<<endl;
    delete_ele(first, 2); // delete element at index 2
    display(first);
    cout<<endl;
    return 0;
}
