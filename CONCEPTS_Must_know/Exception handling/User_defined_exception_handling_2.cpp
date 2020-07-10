//Exception hadlin using excpetion class's object(using object of excpetion class)

#include <iostream>
#include <exception>

using namespace std;

class division : public exception {
public :
    const char *what() const throw() {
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
    catch(exception &str) { //Using Exception of exception class
        cerr << str.what();
    }
    return 0;
}

