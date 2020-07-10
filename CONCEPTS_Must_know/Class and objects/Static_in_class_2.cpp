/*
    Use of static keyword in classes of C++
    There is only one copy of static field created in the memory. It is shared to all the objects.
    To get more detail read this : https://www.javatpoint.com/cpp-static
*/

#include <iostream>

using namespace std;

class calculate {
public :
    static int cnt;
    calculate() {
        cout << "Default Constructor called" << endl;
        cnt++;
    }
    void result() {
        cout << cnt << endl;
    }
};

int calculate :: cnt = 0;

int main() {
    calculate obj1;
    obj1.result();
    calculate obj2;
    obj2.result();
    return 0;
}

