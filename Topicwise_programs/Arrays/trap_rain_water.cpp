// Rain water problems (Trapping Rain water problem)
/*
Given height of n buildings, find out how many units of water can
be stored in between the buildings. Consider width of the buildings
as 1 unit.
*/

/* Bruteforce approach
    int water_stored = 0, lmax = a[0], rmax = a[n-1];
    for (int i = 0; i < n-1; i++) {
        for (int j = i; j >= 0; j--) {
            if (a[j] > lmax) {
                lmax = a[j];
            }
        }
        for (int j = 0; j < n; j++) {
            if (a[j] > rmax) {
                rmax = a[j];
            }
        }
        water_stored += min(lmax, rmax) - a[i]; // a[i] is the current height of the building
    }
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number of buildings : ";
    cin >> n;
    int a[n];

    cout << "Enter " << n << "heights of the buildings :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Optimized solution
    int left[n], right[n], water_stored = 0;
    left[0] = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > left[i-1]) {
            left[i] = a[i];
        } else {
            left[i] = left[i-1];
        }
    }

    for (int i = n-1; i >= 0; i--) {
        if (a[i] > right[i+1]) {
            right[i] = a[i];
        } else {
            right[i] = right[i+1];
        }
    }

    for (int i = 0; i < n; i++) {
        water_stored += min(left[i], right[i]) - a[i];
    }

    cout << water_stored << endl;

    return 0;
}