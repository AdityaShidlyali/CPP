// Array reversal Algorithm

#include <iostream>

using namespace std;

void reverseArray(int a[], int start, int end) {
    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int d;
    cout << "Enter how many time you want to rotate : ";
    cin >> d;

    reverseArray(a, 0, d-1);
    reverseArray(a, d, n-1);
    reverseArray(a, 0, n-1);

    cout << "After left rotation of the array : " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}