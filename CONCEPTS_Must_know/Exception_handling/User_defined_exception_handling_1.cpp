//Program for the user defined exception handling using class name and object

#include <iostream>
#include <exception>

using namespace std;

class division : public exception {
public :
    const char *what() {
        return "Division with zero is not possible";
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    try {
        if( b == 0 ) {
            division O1;
            throw O1;
        }
        else {
            cout << "The division is : " << a/b;
        }
    }
    catch(division str) { // Using class name object
        cerr << str.what();
    }
    return 0;
}

