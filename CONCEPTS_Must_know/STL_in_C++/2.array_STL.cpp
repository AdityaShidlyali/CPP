// Arrays in STL:

// syntax : std::array<type, size> arr;

// NOTE:
// 1. std::array is container that encapsulates fixed sized array.
// 2. Array size is needed at compile time.
// 3. Assign by value is actually by value.
// 4. Accessing elements:
//      1. at()
//      2. operaotor[]
//      3. front()
//      4. back()
//      5.data() //it gives access to the underlying array

#include <iostream>
#include <array>

using namespace std;

int main() {
    array <int, 5> arr = {12, 14, 1, 2};

    for (auto &i : arr) {
        cout << i << " ";
    }

    cout << arr.front() << endl; // gives the first element of the array
    cout << arr.back(); // gives the end element of the array

    return 0;
}