//
//  converting_c_prog_to_c++.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 14/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

//    struct Rectangle {
//        int length;
//        int breadth;
//    };

//     All these functions are meant for the structure only, If that structure is not there,
//     There is no use of these functions, see they are taking rectangle as parameter.
//     So, now the question is, Why these functions are outside? Include them inside the 'class'.


//    void initialize(struct Rectangle *r, int l, int b){
//        r->length = l;
//        r->breadth = b;
//    }
//
//    Now, check the below given class, And this area function is a member of Class only.
//    Why does we have to give this rectangle as an argument? We simple remove the argument.
//    See this length and breadth are directly accessible, so no need of 'r' variable name.
//    Just length = l; breadth = b;
//    Now here length and breadth directly accessible, no need of r here, because I have removed the parameter
//    Check the 'area' member function in class defination below.
//    int area(struct Rectangle r){
//        return r.length*r.breadth;
//    }
//
//    void change_length(struct Rectangle *r, int l){
//        r->length = l;
//    }

class Rectangle {
    public:
        int length;
        int breadth;
        
        
//        Previously we had the initialize function. We don't want this function, we want direct initialization
//        at the time of declaration only(check line no 75). How is this possible? For that, We should have a function for initialization
//        but we want it to be called automatically at the time of creation of an object.
//        So yes same initialize function, we will change the name, we will call it as rectangle.
//        What is this? This is same as class name
//        This is having same name as class name.
//        So this becomes a constructor,
//        Yes, this is a constructor.
//        This will be automatically called, whenever we are creating an object, it does the job of initializing
//        an object.
        
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length*breadth;
        }

        void change_length(int l){
            length = l;
        }
};

int main() {
    Rectangle r(10,5);
    int area_value;
//  initialize(&r, 10, 20);
//  area_value = area(r);
    area_value = r.area();
    cout<<"area : "<<area_value<<endl;
//  change_length(&r, 5);
    r.change_length(6);
    cout<<"new length : "<<r.length<<endl;
    return 0;
}
