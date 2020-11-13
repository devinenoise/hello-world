#include <iostream>
#include <string>
using namespace std;


class HelloWorldClass {
public:
    string helloWorld() {
        return "Hello World!\n";
    }
    int* numberArray() {
        int numGroup[] = { 1, 3, 5, 7, 9 };
        int length = sizeof(numGroup) / sizeof(numGroup[0]);
        for (int i = 0; i < length; i++) {
            cout << numGroup[i] << endl;
        }
            return 0;
    }
};


//int numbers[5] = { 5, 4, -2, 29, 6 };




int main() {

   HelloWorldClass HelloWorld;

   cout << HelloWorld.helloWorld(); 

   HelloWorld.numberArray();

   return 0;

}