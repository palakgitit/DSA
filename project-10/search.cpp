// searching & sorting 

#include <iostream>
using namespace std;

// Print Array 
void pArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Selection Sort
void sSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    cout << "Selection Sort done!\n";
}

// Merge Sort 
void mSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Merge Sort done!\n";
}

//  Linear Search 
void lSearch(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            cout << "Found at position " << i + 1 << endl;
            return;
        }
    }
    cout << "Not found.\n";
}

//  Binary Search 
void bSearch(int arr[], int size, int num) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == num) {
            cout << "Found at position " << mid + 1 << endl;
            return;
        }
        else if (arr[mid] < num) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    cout << "Not found.\n";
}


int main() {
    int size;
    cout << "Enter The numbers for Array: ";
    cin >> size;

    int arr[100];
    cout << "Enter " << size << " Numbers:\n";
    for (int i = 0; i < size; i++) {
        cout << i << " index: ";
        cin >> arr[i];
    }

    // conditions
    int choice;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Selection Sort\n";
        cout << "2. Merge Sort\n";
        cout << "3. Linear Search\n";
        cout << "4. Binary Search\n";
        cout << "5. Print Array\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            sSort(arr, size);
        }
        else if (choice == 2) {
            mSort(arr, size);
        }
        else if (choice == 3) {
            int num;
            cout << "Enter number to search: ";
            cin >> num;
            lSearch(arr, size, num);
        }
        else if (choice == 4) {
            int num;
            cout << "Enter number to search: ";
            cin >> num;
            bSearch(arr, size, num);
        }
        else if (choice == 5) {
            pArray(arr, size);
        }
        else if (choice == 0) {
            cout << "You choose to exit!\n";
        }
        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
