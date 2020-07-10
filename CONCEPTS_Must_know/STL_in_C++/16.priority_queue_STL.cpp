// priority queue in STL

// syntax : priority_queue<type> queue_name;

// 1. std::priority_queue is is a container adaptor that provides constant time lookup of the 
//    largest or smallest elements.
// 2. By default std::vector container is used inside.
// 3. Cost of insertion and extraction is logarithmic.
// 4. std::priority_queue is implemented using std::make_heap, std::pop_heap, std::push_heap functions.

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

template <typename T> void print(T &q) {
    while (!q.empty()) {
        std::cout << q.top() << " ";
        q.pop();        
    }
    cout << "\n";
}

int main() {
    {
        priority_queue<int> q;
        for (int ele : {1, 8, 2, 4, 2, 0, 9, 7}) {
            q.push(ele);
        }
        print(q);
    }
    {
        priority_queue<int, std::vector<int>, std::greater<int>> q2;
        for (int ele : {1, 2, 6, 2, 5, 4, 5, 10, 4,}) {
            q2.push(ele);
        }
        print(q2);
    }
    {   // use of lambda function to compare elements:
        auto cmp = [] (int left, int right) {
            return left < right;
        };

        priority_queue<int, std::vector<int>, decltype(cmp) > q3 (cmp);
        for (int ele : {12, 3, 4, 5, 14, 3, 53, 4}) {
            q3.push(ele);
        }
        print(q3);
    }
    return 0;
}