//
//  c++_class.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 14/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Rectangle {
    
private:
    // data members
    int length;
    int breadth;
    
public:
    // non parameterized constructor or default constructor
    // if you are creating an object of rectangle without passing any arguments
    // then this constructor will make length & breadth as '0'
    Rectangle(){
        length = 0;
        breadth = 0;
    }
    
    // parameterized constructor
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    
    // method of class
    int area(){
        return length*breadth;
    }
    
    // method of class
    int perimeter(){
        return 2*(length+breadth);
    }
    
    // method of class || mutator
    void setLength(int l){
        length = l;
    }
    
    // method of class || mutator
    void setBreadth(int b){
        breadth = b;
    }
    
    // method of class || accessor
    int getLength(){
        return length;
    }
    
    // method of class || accessor
    int getBreadth(){
        return breadth;
    }
    
    // Used to deallocate the dynamic memory allocation.
    // once the main function ends, object is automatically destroyed.
    // Destructor
    ~Rectangle(){
        cout<<"Destructor"<<endl;
    }
};

int main() {
    
    Rectangle r(10, 8);
    
    cout<<"Area :"<<r.area()<<endl;
    cout<<"Perimeter :"<<r.perimeter()<<endl;
    
    return 0;
}
