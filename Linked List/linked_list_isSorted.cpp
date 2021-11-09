//
//  linked_list_isSorted.cpp
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

int is_LL_Sorted(struct Node *linked_list_node)
{
    int prev_min = -65536;
    while (linked_list_node) {
        if (linked_list_node->data < prev_min) {
            return 0;
        }
        prev_min = linked_list_node->data;
        linked_list_node = linked_list_node->next;
    }
    return 1;
}

int main()
{
    string result;
    create(10); // element at index 1
    create(20); // element at index 2
    create(30); // element at index 3
    create(40); // element at index 4
    display(first);
    cout<<endl;
    result =  is_LL_Sorted(first)?"Sorted":"Not Sorted";
    cout<<"Given List is "<<result<<endl;
    return 0;
}
