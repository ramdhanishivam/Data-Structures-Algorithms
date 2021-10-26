//
//  missing_element_sorted_array.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 26/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A[] = {1,2,3,4,6,7,8,9,10};
    int sum = 0;
    for (int i=0; i<9; i++) {
        sum = sum + A[i];
    }
    cout<<"Sum of all Elements is: "<<sum<<endl;
    cout<<"Actual Sum of First 10 Natural Numbers is: "<<10*11/2<<endl;
    cout<<"Therefore the missing number is the difference between actual sum & sum."<<endl;
    cout<<"Missing Number is: "<<10*11/2 - sum<<endl;
}
