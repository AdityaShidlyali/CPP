/*
    Program to illustrate the use of "this" operator in C++
    Used to refer for the existing instances of the class
    To get more detail read this : https://www.javatpoint.com/cpp-this-pointer
*/

#include <iostream>

using namespace std;

class calculate {
public :
    int a, b, *p;
    calculate (int a, int b) {
        this -> a = a;
        this -> b = b;
        p = new int;
    }
    void add() {
        *p = a + b;
        cout << "The sum is : " << *p;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    calculate obj(a, b);
    obj.add();
    return 0;
}

