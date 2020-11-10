// Hello World C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int numGroup() {
    return 42;
}

std::string helloWorld[] = { "Hello World!\n" };


int main()
{
    std::string aStringInsideMain = helloWorld[0];

    std::cout << aStringInsideMain;


    // pause the string so the terminal window remains open
    system("pause>0");
    
}

