//
//  main.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 10/10/21.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    cout << "Enter the size of array";
    cin >> n;
    int A[n];
    for (int x:A) {
        cout << x << endl;
    }
    cout << sizeof(A) << endl;

    return 0;
}
