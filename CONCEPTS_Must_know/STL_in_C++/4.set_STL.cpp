// Set in STL

// syntax : std::set<type> s1;

// NOTE:
// 1. std::set is associative container that contains a sorted set of unique element of the type key.
// 2. It is usually implemented using red-black tree.
// 3. Insertion, removal, searching has logarithmic complexity.
// 4. If we want to store user defined data type in the set then we have to provide
//    compare function so that we can store while constructing set object.
// 5. We can pass order of storing while constructing set object.

// BOTTOM LINE :
// It stores unique elements and that too in sorted order (Asc. / Desc.)

#include <iostream>
#include <set>

using namespace std;

class person {
    public :
        int age;
        string name;

    bool operator < (const person &obj) const {
        return age < obj.age;
    }
};

int main() {
    set <int> s = {12, 12, 4, 5, 1, 14, 14};

    for (const auto &ele : s) {
        cout << ele << " ";
    }

	cout << endl;
    set<person> s1 = { {23, "Aditya"}, {45, "Suchitra"} }; //User defined set
    for (const auto &ele : s1) {
        cout << ele.age << " " << ele.name << endl;
    }

    return 0;
}