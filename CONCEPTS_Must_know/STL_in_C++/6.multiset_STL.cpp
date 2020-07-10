// Multiset in STL

// syntax: std::multiset<type> set_name;

// 1. std::multiset is an associative container that contains the sorted set of duplicate elements.
// 2. It is manually implemented using Red_black tree.
// 3. Insertion, removal, searching have logarithmic complexity.
// 4. If we want to store the user defined data type in multiset then we will have to provide
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing the object.

// Bottom Line :
// multiset is similar to set, except it can contain multiple elements with same value.

#include <iostream>
#include <set>

using namespace std;

int main() {

    // syntax for storing the elements in descendig order during compile time :
    // multiset <int, std::greater<int>> set_name;
    multiset <int> s = {12, 14, 15, 14, 14, 12, 14};

    for (auto &ele : s) {
        cout << ele << " ";
    }

    return 0;
}