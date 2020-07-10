// vector in STL

// syntax: std::vector<type> vector_name;

// NOTE:
// 1. std::vector is sequence container and also known as Dynamic array or Array list.
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// Element Access :
// at(), operator[], front(), back(), data()

// Modifiers :
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

// To use this efficiently :
// make use of functions like : shrink_to_fit() and reserve

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> v;
    v = {1, 2, 3, 4, 5};

    for (auto &ele : v) {
        cout << ele << " ";
    }

    cout << endl;
    cout << v.front() << endl; // gives the first element of the vector
    cout << v.back(); // gives the second element of the vector

    return 0;
}