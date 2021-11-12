//
//  oop_class_linked_list.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 11/11/21.
//

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *first;
public:
    LinkedList()
    {
        first = NULL;
    }
    
    LinkedList(int A[], int n);
    ~LinkedList();
    
    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Length();
};

LinkedList::LinkedList(int A[], int n)
{
    Node *t, *last;
    int i=0;
    
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for (i=1; i<n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

LinkedList::~LinkedList()
{
    Node *p = first;
    while (first) {
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList::Display()
{
    Node *p = first;
    while (p) {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int LinkedList::Length()
{
    int leng = 0;
    Node *p = first;
    while (p) {
        leng++;
        p = p->next;
    }
    return leng;
}

void LinkedList::Insert(int index, int x)
{
    Node *t, *p = first;
    
    // condition check for invalid index
    if (index < 0 || index > Length()) {
        return;
    }
    
    // create a new node which is to be inserted.
    t = new Node;
    t->data = x;
    t->next = NULL;
    
    if (index == 0) {
        // for index equals to zero insert the node before the first node.
        t->next = first;
        first = t;
    } else {
        for (int i=0 ; i < index-1; i++) {
            // traverse till the iterator 'p' reaches the (index-1) node.
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
    
}

int LinkedList::Delete(int index)
{
    // q acts as tail to the 'p' pointer(traveller).
    Node *q, *p;
    q = NULL;
    
    // to store the deleted node value.
    int x = -1;
    
    // condition check for invalid index
    // Here we consider the First Node is present at index '1'.
    if (index < 1 || index > Length()) {
        return -1;
    }
    
    if (index == 1) {
        // for index equals to '1' delete the first node.
        p = first;
        first = first->next;
        x = p->data;
        delete p;
    } else {
        p = first;
        for (int i=0; i<index-1; i++) {
            // 'q' holds the previous node
            q = p;
            p = p->next;
        }
        // connects the previous node to the next node of node which will be deleted.
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
    
}

int main() {
    int A[]={1,2,3,4,5};
    int length_of_list = 0;
    LinkedList list(A,5);
    cout<<"Linked List created : ";
    list.Display();
    
    length_of_list = list.Length();
    cout<<"Linked List Length : "<<length_of_list<<endl;
    
    // Here we consider the First Node is present at index '0'.
    cout<<"Linked List after inserting '0' at index '3' : ";
    list.Insert(3,0);
    list.Display();
    
    // Here we consider the First Node is present at index '1'.
    int delete_node = list.Delete(4);
    cout<<"Linked List after deleting "<<delete_node<<" at index '4' : ";
    list.Display();
    return 0;
}
