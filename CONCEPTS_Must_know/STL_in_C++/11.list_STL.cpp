// List in STL

// syntax : std::list<type> list_name;

// NOTE:
// 1. This is double linked list we know from C programming language.
// 2. List is sequence container that allows non contiguous memory allocation.
// 3. List is faster compared to other sequence containers (vector, forward_list, deque) in terms of
//    insertion, removal and moving the elements in any of the position provided we have the iterator of the position.
// 4. We should use this class instead of doubly linked list because :
//    a. Well tested.
//    b. Bunch of available functions.
// 5. Few available operations are :
//    operator=, assign, front, back, empty, size, max_size, clear, insert, emplace, push_back, pop_back
//    push_front, pop_front, reverse, sort, merge, splice, unique, remove, remove_if, resize.

#include <iostream>
#include <list>

using namespace std;

int main() {
    list <int> l1 = {5, 12, 12, 24, 2, 4};
    for (auto &ele : l1) {
        cout << ele << " ";
    }
    return 0;
}