// Check whether the array is a palindrome (reads the same forward and backward).

#include <iostream>
using namespace std;

int main (){

    int size; 

    cout << "Enter the array's element : ";
    cin >> size; 

    int arr[size];
    for (int i=0 ; i<size ; i++){
        cout << " a[" << i<<"] : ";
        cin >> arr[i]; 
    }

     for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            cout << "This is Not Palindrome";
            return 0;
        }
    }

    cout << "This is Palindrome";
    return 0;
}

