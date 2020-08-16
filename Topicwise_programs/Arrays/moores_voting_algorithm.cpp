// Moore's Voting algorithm
// This algorithm is used to get the majority element
// Majority element is the element which occurs more than n/2

/* One of the optimal solution is to sort the array and the element which is at 
    n/2th position then that is the majority element.
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number of array elements : ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // find the majority candidate :
    int count = 1, major = 0;
    for (int i = 1; i < n; i++) {
        if (a[major] == a[i]) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            major = i;
            count = 1;
        }
    }

    count = 0;

    // Check whether the majority candidate is the majority element :
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == a[major]) {
            count++;
        }
    }

    if (count > n/2) {
        cout << "Majority element exist and that is : " << a[major] << endl;
    } else {
        cout << "No majority element exist";
    }

    return 0;
}