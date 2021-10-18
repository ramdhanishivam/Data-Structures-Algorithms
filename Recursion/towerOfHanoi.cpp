//
//  towerOfHanoi.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 18/10/21.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;


// Function Name: towerOfHanoi
// Param - 1 -> number of discs
// Param - 2 -> Tower A
// Param - 3 -> Tower B
// Param - 4 -> Tower C
void towerOfHanoi(int n, int A, int B, int C){
    if (n>0) {
        towerOfHanoi(n-1, A, C, B);
        cout<<"Move Disc from tower '"<<A<<"' to tower '"<<C<<"'"<<endl;
        towerOfHanoi(n-1, B, A, C);
    }
}

int main() {
    towerOfHanoi(3, 1, 2, 3);
    return 0;
}
