//
//  reverse_a_string_2.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 28/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    string A = "Python";
    for (int i=A.length() - 1; i>=0; i--) {
        cout<<A[i];
    }
    cout<<endl;
}
