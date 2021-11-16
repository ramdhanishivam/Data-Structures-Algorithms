//
//  paranthesis_matching.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 15/11/21.
//

#include <iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
}*top = NULL;

void push(char x)
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

int isBalanced(char *expression)
{
    for (int i=0; expression[i] != '\0'; i++) {
        if (expression[i] == '(') {
            push(expression[i]);
        } else if(expression[i] == ')'){
            if (top == NULL) {
                return 0;
            }
            pop();
        }
    }
    if (top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char *exp="((a+b)*(c-d))";

     printf("%d ",isBalanced(exp));
    return 0;
}
