#include <iostream>
#include <string>
using namespace std;




string helloWorld() {
    return "Hello World!\n";
}


void numberArray() {
    int numGroup[5] = { 1, 3, 5, 7, 9 };
    int length = sizeof(numGroup) / sizeof(numGroup[0]);
    for (int i = 0; i < length; i++) {
        cout << numGroup[i] << endl;
    }
}



int main() {

   cout << helloWorld(); 

   numberArray();


}