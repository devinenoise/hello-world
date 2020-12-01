#include <iostream>
#include <string>
using namespace std;


class HelloWorldClass {
public:
    int randomArray() {
        int* array;
        int i, n;

        cout << "How long should the magic array be?";
        cin >> n;

        array = new int(n);

        cout <<"Input your "<<n<<" elements for the array"<<endl;
        for (i = 0; i < n; i++)
        {
            cout << "Input element " << i + 1 <<": ";
            cin >> array[i];
        }

        cout << "Entered elements are: ";
        for (i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
        delete(array);

            return 0;
        ~randomArray();
    }
};


int main() {

   HelloWorldClass HelloWorld;

   HelloWorld.randomArray();

   return 0;

}