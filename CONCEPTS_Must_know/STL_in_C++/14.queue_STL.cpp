// queue in STL

// syntax : std::queue<type> queue_name;

// NOTE:
// 1. std::queue is the container adapter that gives the programmer the functionality of queue.
// 2. queue is FIFO (first in first out) data structures.
// 3. std::queue provides only specific set of functions.
// 4. std::queue allows to push or insert at back end and pop or remove from front end.
// 5. std::queue gives front, back, push, pop, empty, size.

#include <iostream>
#include <queue>

using namespace std;

void print(queue<int> que) {
    while (!que.empty()){
        cout << que.front();
        que.pop();
    }
}

int main() {
    queue<int> que;

    que.push(2);
    que.push(3);
    que.push(4);
    
    print(que);

    return 0;
}