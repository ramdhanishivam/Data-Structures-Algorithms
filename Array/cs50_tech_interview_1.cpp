//
//  cs50_tech_interview_1.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 31/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int A[5] = {5,4,1,2,3};
    int Hash[5];
    
    int i, smallest = A[0];
    for (i=0; i<5; i++) {
        Hash[A[i]] = i;
    }
    
    for (i=1; i<5; i++) {
        if (A[i] < smallest) {
            smallest = A[i];
        }
    }
    cout<<"Number of times the sorted array is rotated is : "<<Hash[smallest]<<endl;
}
