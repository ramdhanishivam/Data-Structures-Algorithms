//
//  reverse_linkedList_recursion.cpp
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
}*first = NULL, *prev_node = NULL, *last_node = NULL;

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

// function uses the recursion to reverse the list.
void reverse_linkedList_recursive(struct Node *q, struct Node *p){
    if (p) {
        reverse_linkedList_recursive(p, p->next);
        p->next = q;
    } else {
        first = q;
    }
}

int main()
{
    string result;
    create(10);
    create(20);
    create(30);
    create(40);
    display(first);
    cout<<endl;
    reverse_linkedList_recursive( prev_node ,first);
    display(first);
    cout<<endl;
    return 0;
}
