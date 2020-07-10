// Map in STL

// NOTE:
// 1. Syntax : map<T1, T2> map_name; where the T1 is key type and T2 is value type.
// 2. std :: map is associative container, that stores the elements in the key value combination
//    where the key should be unique otherwise it overrides the previous value.
// 3. It is implemented using self-balance binary search tree (AVL/Red-Black tree).
// 4. It stores the key value pair in sorted order on the basis of key (Asc./Desc.).
// 5. std :: map is generally used in dictionary type problems.

// Example : Dictionary.

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    std::map<int, string> m; // we can store the elements in descending order by writing : map<int, string, std::greater> map_name;
    m[100] = "Aditya";
    m[200] = "Shidlyali";
    m[50] = "Data Science";
    m[90] = "Machine learning";

    for (auto &ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }

    //We can also insert the pair value in map.
    m.insert(make_pair(13, "Artificial Intelligence"));
    for (auto &ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }

    // we can also have the vector in map also :
    map <string, vector<int>> m3;
    m3["Aditya"].push_back(100);

    for (auto &e1 : m3) {
        cout << e1.first << " ";
        for (auto &e2 : e1.second) {
            cout << e2;
        }
        cout << endl;
    }

    return 0;
}