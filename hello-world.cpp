// Hello World C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// defining the number array
int numGroup[5] = { 1, 3, 5, 7, 9 };

//declare helloWorld function
string helloWorld();

// declares numberArray function
void numberArray();

int main() {

   cout << helloWorld(); 

   
   
   numberArray();

   // pause the string so the terminal window remains open
   system("pause>0");
    
}

string helloWorld() {
    return "Hello World!\n";
}

// defines function to loop through numGroup

void numberArray() {
    for (int i = 0; i < 5; i++) {
        cout << numGroup[i] << endl;
    }
}
