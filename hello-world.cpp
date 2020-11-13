#include <iostream>
#include <string>
using namespace std;


class HelloWorldClass {
public:
    string helloWorld() {
        return "Hello World!\n";
    }
    int* numberArray() {
        int numGroup[5] = { 1, 3, 5, 7, 9 };
        int length = sizeof(numGroup) / sizeof(numGroup[0]);
        for (int i = 0; i < length; i++) {
            return numGroup;
            cout << numGroup[i] << endl;
        }
    }
};




int main() {

   HelloWorldClass HelloWorld;

   cout << HelloWorld.helloWorld(); 

   HelloWorld.numberArray(&numGroup);


}