/*
    Program to illustrate the use of the friend function of private variables
    of two classes (Which is friendly to both classes)
    We can overload the friend function
*/

#include <iostream>

using namespace std;

class B;
class A {
    int x;
public :
    A() {
        x = 1;
    }
    friend void access (A,B);
};

class B {
    int y;
public :
    B() {
        y = 2;
    }
    friend void access (A,B);
};

void access (A o1, B o2) {
    cout << "X value is : " << o1.x << endl;
    cout << "Y value is : " << o2.y << endl;
}

int main() {
    A o1;
    B o2;
    access(o1, o2);
    return 0;
}

