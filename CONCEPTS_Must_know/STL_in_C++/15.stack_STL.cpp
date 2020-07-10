// stack in STL

// Syntax : std::stack<type> stack_name;

// NOTE:
// 1. std::stack class is container adapter that gives the programmer the functionality of stack.
// 2. Ineternally it ueses std::deque container.
// 3. It is LIFO (last in first out).
// 4. std::stack allows to push or insert and pop or remove only from the top.

// Functions are: time complexity of all the functions are O(1).
// empty(), size(), top(), size(), push(), pop().

#include <iostream>
#include <stack>

using namespace std;

void print(std::stack<int> stk) {
    while (!stk.empty()) {
        cout << stk.top();
        stk.pop();
    }
}

int main() {
    stack <int> stk;

    stk.push(100);
    stk.push(200);
    stk.push(300);

    print(stk);

    return 0;
}