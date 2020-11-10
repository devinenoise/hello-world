// Hello World C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int numGroup() {
    return 42;
}

string helloWorld() {
    return "Hello World!\n"; 
}


int main()
{
   //string aStringInsideMain = helloWorld;

   cout << helloWorld() << endl;
     

    // pause the string so the terminal window remains open
    system("pause>0");
    
}


