//
//  stack_using_LL_oop.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 15/11/21.
//

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;
public:
    void push(int x);
    int pop();
    void display();
    
};
void Stack::push(int x)
{
    Node *t;
    t = new Node;
    if (t == NULL) {
        cout<<"Stack Overflow";
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop()
{
    int x = -1;
    struct Node *p;
    if (top == NULL) {
        cout<<"Stack Empty"<<endl;
    } else {
        p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return -1;
}

void Stack::display()
{
    Node *p = top;
    while (p) {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int main() {
    Stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    
    stk.display();
    
    stk.pop();
    
    stk.display();
    return 0;
}
