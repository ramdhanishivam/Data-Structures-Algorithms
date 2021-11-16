//
//  stack.cpp
//  DSA Basics
//
//  Created by Shivam Ramdhani on 15/11/21.
//

#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    cout<<"Enter the size of stack";
    cin>>st->size;
    st->top = -1;
    st->S = new int[st->size];
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1) {
        cout<<"Stact Overflow";
    } else {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1) {
        return 0;
    } else {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int peek(struct Stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0) {
        cout<<"Invalid Index";
    } else {
        x = st.S[st.top - index + 1];
    }
    return x;
}

int isEmpty(struct Stack st)
{
    if (st.top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isFull(struct Stack st)
{
    if (st.top == st.size-1) {
        return 1;
    } else {
        return 0;
    }
}

int stackTop(struct Stack st)
{
    if (!isEmpty(st)) {
        return st.S[st.top];
    } else {
        return -1;
    }
}

void display(struct Stack st)
{
    for (int i = st.top; i>=0; i--) {
        cout<<st.S[i]<<" ";
    }
    cout<<endl;
}

int main() {
    struct Stack st;
     create(&st);

     push(&st,10);
     push(&st,20);
     push(&st,30);
     push(&st,40);

     printf("Element at position 2 : %d \n",peek(st,2));

    cout<<"Top of stack : "<<stackTop(st)<<endl;
    display(st);
    
    return 0;
}
