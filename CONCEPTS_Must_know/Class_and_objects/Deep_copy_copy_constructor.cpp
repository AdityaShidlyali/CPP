/*Program to illustrate the how the Deep Copy of the copy constructor works
    this is called aliasing how the aliasing works on the Python same goes here

    To get more detail read this : https://www.javatpoint.com/cpp-copy-constructor
*/

#include <iostream>

using namespace std;

class add {
public :
    int a, b, *p;
    add () {
        p = new int;
    }
    add (add &obj) {
        a = obj.a;
        b = obj.b;
        *p = *(obj.p);
    }
    void setdata (int x, int y) {
        a = x;
        b = y;
        *p = a + b;
    }
    void display () {
        cout << "The sum is : " << a << " + " << b << " = " << *p;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    add o1, o2;
    o1.setdata(a, b);
    o2 = o1;
    o2.display();
    return 0;
}


