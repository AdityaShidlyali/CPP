// Multimap in C++

// syntax : multi_map<T1, T2> map_name; where T1 is the key type and T2 is the value type.

// NOTE:
// 1. Multimap is an associative container that contains a sorted list of key-value pairs.
//    while permitting multiple entries with same key.
// 2. It stores the key value pair on the basis of key (Asc./Desc.).
//    Syntax : std :: multimap <char, int, std::greater<char>> multimap.
// 3. Data structure used in multimap is not defined by standard, but the red-black tree is assumed by most of the people.
// 4. Lookup functions are : count(), find(), contains(), equal_range(), lower_bound(), upper_bound().
// 5. We dont use at() and operator [] to access the elements.

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    multimap<char, int> m;
    m.insert(make_pair('v', 13));
    m.insert(make_pair('f', 17));
    m.insert(make_pair('r', 14));
    m.insert(make_pair('b', 6));
    m.insert(make_pair('a', 100));

    for (auto &ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }

    auto range = m.equal_range('a'); // This give the range of occerences of 'a' key value only
    for (auto it=range.first; it!=range.second; it++) {
        cout << it->first << " " << it->second << endl;
    }

    cout << endl;
    cout << m.count('a'); // This counts the number of occerences of 'a' key.

    return 0;
}