//
//  stack_using_LL.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 15/11/21.
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top = NULL;

void push(int x)
{
    struct Node *t;
    t = new Node;
    if (t == NULL) {
        cout<<"Stack Overflow";
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    int x = -1;
    struct Node *p;
    if (top == NULL) {
        cout<<"Stack Underflow";
    } else {
        p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return -1;
}

void display()
{
    struct Node *p = top;
    while (p) {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    
    display();
    
    pop();
    
    display();
    return 0;
}
