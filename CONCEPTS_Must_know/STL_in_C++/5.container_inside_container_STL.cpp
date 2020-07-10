//Container inside container

// in the following program we took the example of vector in vector
// The vector in vector is used for the concept of TREE

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> tree;

    int edge;
    cout << "Enter number of nodes : ";
    cin >> edge;
    tree.resize(edge);

    int n1, n2;
    for (int i=0; i<edge; i++) {
        cin >> n1 >> n2;
        tree[n1].push_back(n2);
    }

    for (const auto &e1 : tree) {
        for (const auto &e2 : e1) {
            cout << e2 << " ";
        }
        cout << endl;
    }

    return 0;
}