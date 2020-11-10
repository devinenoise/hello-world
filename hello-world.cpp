// Hello World C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



string helloWorld() {
    return "Hello World!\n"; 
}

int numGroup[5] = { 1, 3, 5, 7, 9 };


int main() {

   cout << helloWorld() << endl;

   for (int i = 0; i < 5; i++) {
       cout << numGroup[i] << endl;
   }

    // pause the string so the terminal window remains open
    system("pause>0");
    
}


