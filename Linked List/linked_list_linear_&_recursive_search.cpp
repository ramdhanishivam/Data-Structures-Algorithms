//
//  linked_list_linear_&_recursive_search.cpp
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

struct Node * linear_search(struct Node *linked_list_node, int key)
{
    while (linked_list_node) {
        if (linked_list_node->data == key) {
            return linked_list_node;
        }
        linked_list_node = linked_list_node->next;
    }
    return NULL;
}

struct Node * recursive_search(struct Node *linked_list_node, int key)
{
    if (linked_list_node == NULL) {
        return NULL;
    }
    if (linked_list_node->data == key) {
        return linked_list_node;
    }
    return recursive_search( linked_list_node->next, key );
}

int main()
{
    struct Node *search_node;
    int A[]={3,5,7,10,25,8,32,2};
    create(A, 8);
    display(first);
    cout<<endl;
    search_node = recursive_search(first, 2);
    cout<<search_node->data;
    cout<<endl;
    return 0;
}
