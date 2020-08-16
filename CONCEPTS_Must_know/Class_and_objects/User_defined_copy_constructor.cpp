//User defined constructor https://www.javatpoint.com/cpp-copy-constructor

#include <iostream>

using namespace std;

class add {
public :
    int x, y, *p, a, b;
    add (int x, int y) {
        p = new int;
        a = x;
        b = y;
        *p = x + y;
    }
    void display () {
        *p = a + b;
        cout << "The sum is : " << *p;
    }
};

int main () {
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    add o1 (a, b);
    add o2(o1);
    o2.display();
    return 0;
}
