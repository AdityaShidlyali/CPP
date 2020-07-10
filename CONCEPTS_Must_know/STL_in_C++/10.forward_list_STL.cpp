// Forward list in STL

// syntax : forward_list<int> list_name;

// NOTE:
// 1. This is singly linked list what we know from C programming language.
// 2. Why forward_list why not singly linked_list ?
// 3. we should use this class instead of traditional singly linked list because :
//      a. well tested
//      b. bunch available functions
// 4. Few available operations :
//   operator=, assign, front(and there is no back func.), empty, max_size, clear, insert_after, emplace_after, reverse, sort
//   merge, splice_after, unique, remove, remove_if, resize.

#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list <int> l1 = {12, 13, 5, 15};
    forward_list <int> l2 = {100, 50, 60, 80, 100};

    for (auto &ele : l1) {
        cout << ele << " ";
    }

    l1.splice_after(l1.begin(), l2); // This will copy the entire second list to first list at the beginning of the list1

    l1.remove_if( [] (int n) { // to use remove_if we need to use lambada function and here this function removes all the elements which are greater than 4.
        return n > 4;
    });

    return 0;
}