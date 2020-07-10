// deque in STL

// syntax : std::deque<type> queue_name;

// NOTE:
// 1. std :: deque is an indexed sequence container.
// 2. It allows fast insertion from both beginning and end.
// 3. Unlike vector elements of deque are not stored contiguos.
// 4. It uses individually allocated fixed size arrays, with additional bookkeeping,
//    means index based access to deque must perform two pointer derefernce, but in vector we get in one dereference.
// 5. The storage of deque is automatically expanded and contracted as needed.
// 6. Expansion of deque is cheaper than expansion of vector.
// 7. A deque holding just one element has to allocate its full internal array (eg. 8 times the object size
//    on 64 bit libstdc++; 16 times the object size or 4096 bytes, whichever larger, on 64-bit libc++).

// Time Complexities :
// Random access : constant O(1).
// Insertion or removal of element at end or beginning - Constan O(1).
// Insertion or removal of elements - linear O(n).

#include <iostream>
#include <deque>

using namespace std;

void print(const deque<int> &dqu) {
    for (int num : dqu) {
        cout << num << " ";
        cout << endl;
    }
}

int main() {
    {
        std::deque<int>dqu = {2, 3, 4};
        dqu.push_front(1);
        dqu.push_back(5);
        print(dqu);
    }
    {
        std::deque<int> dqu = {2, 3, 4};
        dqu.pop_front();
        dqu.pop_back();
        print(dqu);
    }
    return 0;
}