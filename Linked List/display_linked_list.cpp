//
//  display_linked_list.cpp
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

void display_recursive(struct Node *linked_list_node)
{
    if (linked_list_node) {
        cout<<linked_list_node->data<<",";
        display_recursive( linked_list_node->next );
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

int count_LL_leng_recursive(struct Node *linked_list_node){
    if (linked_list_node) {
        return count_LL_leng_recursive( linked_list_node->next ) + 1;
    } else {
        return 0;
    }
}

int sum_of_elements(struct Node *linked_list_node){
    int sum = 0;
    while (linked_list_node) {
        sum += linked_list_node->data;
        linked_list_node = linked_list_node->next;
    }
    return sum;
}

int sum_of_elements_recursive(struct Node *linked_list_node){
    if (linked_list_node) {
        return sum_of_elements_recursive(linked_list_node->next) + linked_list_node->data;
    } else {
        return 0;
    }
}

int max_of_elements(struct Node *linked_list_node){
    int maximum = INT32_MIN;
    while (linked_list_node) {
        if (linked_list_node->data > maximum) {
            maximum = linked_list_node->data;
        }
        linked_list_node = linked_list_node->next;
    }
    return maximum;
}

int max_of_elements_recursive(struct Node *linked_list_node){
    int maximum = 0;
    if (linked_list_node == 0) {
        return INT32_MIN;
    }
    maximum = max_of_elements_recursive(linked_list_node->next);
    return maximum > linked_list_node->data ? maximum : linked_list_node->data;
}

int main()
{
    int A[]={3,5,7,10,25,8,32,2};
    create(A, 8);
    display(first);
    cout<<endl;
    display_recursive(first);
    cout<<endl;
    cout<<"Length : "<<count_LL_leng(first);
    cout<<endl;
    cout<<"Length with Recursive Approach : "<<count_LL_leng_recursive(first);
    cout<<endl;
    cout<<"Sum of all elements : "<<sum_of_elements(first);
    cout<<endl;
    cout<<"Sum of all elements with Recursive Approach : "<<sum_of_elements_recursive(first);
    cout<<endl;
    cout<<"Max of all elements : "<<max_of_elements(first);
    cout<<endl;
    cout<<"Max of all elements with Recursive Approach : "<<max_of_elements_recursive(first);
    cout<<endl;
    return 0;
}
