#include <iostream>
using namespace std;

int main() {
    int arr[] = {75, 27, 52, 62, 37};
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Bubble Sort: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}