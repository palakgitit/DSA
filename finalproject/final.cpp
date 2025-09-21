#include <iostream>
using namespace std;


struct Node {
    int value;
    Node* next;
};


void addNode(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

// Print linked list 
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << "\n";
}

// Binary Search on array
int binarySearch(int numbers[], int size, int target) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int middle = (start + end) / 2;
        if (numbers[middle] == target) return middle;
        else if (numbers[middle] < target) start = middle + 1;
        else end = middle - 1;
    }
    return -1;
}

// Merge function
void merge(int numbers[], int left, int mid, int right) {
    int size1 = mid - left + 1;
    int size2 = right - mid;
    int part1[size1], part2[size2];

    for (int i = 0; i < size1; i++) {
        part1[i] = numbers[left + i];
    }
    for (int j = 0; j < size2; j++){
         part2[j] = numbers[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < size1 && j < size2) {
        if (part1[i] <= part2[j]) {
            numbers[k] = part1[i];
            i++;
        } else {
            numbers[k] = part2[j];
            j++;
        }
        k++;
    }

    while (i < size1){
     numbers[k] = part1[i]; i++; k++;
     }

    while (j < size2) { 
    numbers[k] = part2[j]; j++; k++; }
}

// Merge Sort 
void mergeSort(int numbers[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(numbers, left, mid);
        mergeSort(numbers, mid + 1, right);
        merge(numbers, left, mid, right);
    }
}


int partition(int numbers[], int low, int high) {
    int pivot = numbers[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (numbers[j] < pivot) {
            i++;
            swap(numbers[i], numbers[j]);
        }
    }
    swap(numbers[i + 1], numbers[high]);
    return i + 1;
}

// Quick Sort
void quickSort(int numbers[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(numbers, low, high);
        quickSort(numbers, low, pivotIndex - 1);
        quickSort(numbers, pivotIndex + 1, high);
    }
}


void printArray(int numbers[], int size) {
    for (int i = 0; i < size; i++) cout << numbers[i] << " ";
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int numbers[100], size = 0;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add number to Linked List\n";
        cout << "2. Show Linked List\n";
        cout << "3. Add number to Array\n";
        cout << "4. Sort Array using Merge Sort\n";
        cout << "5. Sort Array using Quick Sort\n";
        cout << "6. Search number in Array\n";
        cout << "7. Exit\n";
        cout << "Choose option: ";
        cin >> choice;

        if (choice == 1) {
            int value;
            cout << "Enter number: ";
            cin >> value;
            addNode(head, value);
        } else if (choice == 2) {
            cout << "Linked List: ";
            printList(head);
        } else if (choice == 3) {
            int value;
            cout << "Enter number for array: ";
            cin >> value;
            numbers[size++] = value;
        } else if (choice == 4) {
            mergeSort(numbers, 0, size - 1);
            cout << "Array after Merge Sort: ";
            printArray(numbers, size);
        } else if (choice == 5) {
            quickSort(numbers, 0, size - 1);
            cout << "Array after Quick Sort: ";
            printArray(numbers, size);
        } else if (choice == 6) {
            int target;
            cout << "Enter number to search: ";
            cin >> target;
            int idx = binarySearch(numbers, size, target);
            if (idx != -1) cout << "Found at index " << idx << "\n";
            else cout << "Not found\n";
        }
    } while (choice != 7);

    return 0;
}
