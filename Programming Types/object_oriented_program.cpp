//
//  object_oriented_program.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 14/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Rectangle {
    public:
        int length;
        int breadth;
        
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length*breadth;
        }

        int perimeter(){
            return 2*(length+breadth);
        }
};

int main() {
    
    int l,b;
    
    cout<<"Enter length & breadth of rectangle";
    cin>>l>>b;
    
    Rectangle r(l,b);
    
    int a = r.area();
    int peri = r.perimeter();
    
    printf("Area=%d\nBreadth=%d\n", a, peri);
    
}
