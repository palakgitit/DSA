#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int firstPart = mid - start + 1;
    int secondPart = end - mid;

    int left[firstPart], right[secondPart];

    for (int i = 0; i < firstPart; i++) {
        left[i] = arr[start + i];
    }
    for (int j = 0; j < secondPart; j++) {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = start;

    while (i < firstPart && j < secondPart) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < firstPart) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < secondPart) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
