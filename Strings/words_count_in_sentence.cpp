//
//  words_count_in_sentence.cpp
//  DSA_Basics
//
//  Created by Shivam Ramdhani on 28/10/21.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    char sentence[]="Poetry is love";
    printf("%s", sentence);
    cout<<endl;
    int i, word_count=0;
    for (i=0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' && sentence[i-1] != ' ') {
            word_count++;
        }
    }
    
    cout<<"Total number of words in given sentence: "<<word_count+1;
    cout<<endl;
}
