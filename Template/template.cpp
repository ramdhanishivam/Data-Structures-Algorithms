//
//  template.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 14/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

template<class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

    template<class T>
    Arithmetic<T>::Arithmetic(T a, T b){
        this->a = a;
        this->b = b;
    }

    template<class T>
    T Arithmetic<T>::add(){
        T c;
        c= a+b;
        return c;
    }

    template<class T>
    T Arithmetic<T>::sub(){
        T c;
        c= a-b;
        return c;
    }

int main() {
    Arithmetic<int> ar(20,10);
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;
    return 0;
}