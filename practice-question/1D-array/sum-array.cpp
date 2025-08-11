#include <iostream>
using namespace std;

int main() {
    int size, a[100], b[100], c[200];

    cout << "Enter the number of elements in each array: ";
    cin >> size;

    // Input for array A
    cout << "Enter array A's elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    // Input for array B
    cout << "Enter array B's elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "b[" << i << "]: ";
        cin >> b[i];
    }

    // Merge both arrays into array C
    for (int i = 0; i < size; i++) {
        c[i] = a[i]; // Copy A into C
    }

    for (int i = 0; i < size; i++) {
        c[size + i] = b[i]; // Copy B into C after A
    }

    // Sorting merged array C (very simple sort)
    for (int i = 0; i < 2 * size - 1; i++) {
        for (int j = i + 1; j < 2 * size; j++) {
            if (c[i] > c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    // Output the sorted merged array
    cout << "Sorted merged array: ";
    for (int i = 0; i < 2 * size; i++) {
        cout << c[i] << " ";
    }

    return 0;
}
