// Pair in STL

// syntax : std::pair<T1, T2> pair_name;

// NOTE :
// 1. std::pair is struct template that provide way to store two heterogenous objects as single unit.
// 2. map, multimap, unordered_map, unordered_multimap can use pair to insert data into their structures.

#include <iostream>
#include <vector>
#include <utility> // pair is inside this header file.

using namespace std;

void print(pair<int, int> &obj) {
    cout << obj.first << " " << obj.second << endl;
}

int main() {
    {
        pair <int, int> obj(10, 20);
        print(obj);
    }
    {
        pair<int, int> obj = std::make_pair(10, 20);
        print(obj);
    }
    {
        std::vector<std::pair<std::string, int>> list;
        list.push_back(make_pair("Aditya", 20));
        list.push_back(make_pair("Aditya", 20));
        list.push_back(make_pair("Aditya", 20));
        list.push_back(make_pair("Aditya", 20));
        list.push_back(pair<string, int>("Data Science", 45));
        for (const auto &ele : list) {
            cout << ele.first << " " << ele.second << endl;
        }
    }

    return 0;
}