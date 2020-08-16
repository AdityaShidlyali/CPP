/*
    Program to illustrate the use of the friend function of private variables
    of class
*/

#include <iostream>

using namespace std;

class A {
    int x;
public :
    A() {
        x = 1;
    }
    friend void access_x(A);
};

void access_x (A o) {
    cout << "X value is : " << o.x;
}

int main() {
    A o;
    access_x(o);
    return 0;
}

