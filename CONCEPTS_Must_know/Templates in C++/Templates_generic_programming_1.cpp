//Generic programming using templates

//Function Templates

#include <iostream>

using namespace std;

template <class X, class Y> add (X a, Y b) {
    cout << "The sum is : " << a + b << endl;
}

int main() {
    int a1,b1;
    float a2, b2;

    cout << "Enter two numbers of integer types to add : " << endl;
    cin >> a1 >> b1;
    add(a1, b1);

    cout << "Enter two numbers of float types to add : " << endl;
    cin >> a2 >> b2;
    add(a2, b2);

    cout << "Enter two numbers, one of type int and one of type float to add : " << endl;
    cin >> a1 >> b2;
    add(a1, b2);

    return 0;
}

