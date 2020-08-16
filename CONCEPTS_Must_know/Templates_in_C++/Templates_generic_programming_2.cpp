//Generic program to add two numbers

//Using class template

#include <iostream>

using namespace std;

template <class X, class Y>
class addition {
public :
    void add (X a, Y b) {
        cout << "The addition is : " << a+b << endl;
    }
};

int main() {
    int a1, b1;
    float a2, b2;

    cout << "Enter two numbers of type integer : " << endl;
    cin >> a1 >> b1;
    addition <int, int> O1;
    O1.add(a1, b1);

    cout << "Enter two numbers of type float : " << endl;
    cin >> a2 >> b2;
    addition <float, float> O2;
    O2.add(a2, b2);

    cout << "Enter two numbers, one of type int and one of type float : " << endl;
    cin >> a1 >> b2;
    addition <int, float> O3;
    O3.add(a1, b2);

    return 0;
}

