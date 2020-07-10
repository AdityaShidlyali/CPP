// Emplace in STL

// 1. All the container supports the insert and emplacing operation to store the data.
// 2. Emplace is used to construct object in-place and avoids unecessary copy of objects.
// 3. Insert and emplace are equal for premitive datatypes but when we deal with heavy objects
//    we should use emplace for efficiancy if we can.

#include <iostream>
#include <set>

using namespace std;

class A {
    public :
        int x;
        A (int x=0): x{x} {
            cout << "Construct" << endl;
        }

        A (const A &rhs) {
            x = rhs.x;
            cout << "Copy" << endl;
        }
};

bool operator < (const A &lhs, const A &rhs) {
    return lhs.x < rhs.x;
}

int main() {
    set <A> s;
    s.insert(A(1)); // this constructs as well as copies
    cout << endl;
    s.emplace(A(2)); // this also constructs and copies
    cout << endl;
    s.emplace(10); // this only constructs
    return 0;
}