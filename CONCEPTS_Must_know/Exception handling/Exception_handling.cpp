//Program to illustrate the usage of the Exception handling

#include <iostream>

using namespace std;

float divide (int a, int b) {
    if (b == 0) {
        throw "Division with zero is not possible";
    }
    else {
        return (a/b);
    }
}

int main() {
    float a, b, result;
    cout << "Enter two numbers to divide : " << endl;
    cin >> a >> b;
    try {
        result = divide(a, b);
        cout << "Division is : " << result;
    }
    catch (const char *msg) {
        cerr << msg;
    }
    return 0;
}

