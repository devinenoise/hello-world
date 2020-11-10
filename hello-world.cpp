// Hello World C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


//int numGroup[5] = { 1, 3, 5, 7, 9 };

string helloWorld() {
    return "Hello World!\n";
}


void numberArray() {
    for (int i = 0; i < 5; i++) {
        cout << numGroup[i] << endl;
    }
}



int main() {

   cout << helloWorld(); 

   numberArray(); 
}