/*Program to illustrate the how the Shallow Copy of the copy constructor works
    this is called aliasing how the aliasing works on the Python same goes here

    To get more detail read this : https://www.javatpoint.com/cpp-copy-constructor
*/

#include <iostream>

using namespace std;

class calculate {
public :
    int a, b, *p;
    calculate() {
        p = new int;
    }
    void add (int a, int b) {
        *p = a + b;
    }
    void display() {
        cout << "The sum is : " << *p;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    calculate obj1, obj2;
    obj1.add(a,b);
    obj2 = obj1;
    obj2.display();
    return 0;
}

