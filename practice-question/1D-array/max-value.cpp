// 1. Find the Maximum Element in a 1D Array

#include <iostream>
using namespace std; 

int main (){

    int size;

    cout<< "Enter size for array: ";
    cin >> size; 

    int arr[100];
    cout << "Enter the array elements:" <<endl;
    for (int i = 0 ; i < size ; i++){

        cout << "arr [" << i << "] : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "The Maximum Element in 1D array is: ";
    int max = arr[0];
    
    for (int i = 0 ; i < size ; i++){
        // checks value
        if (arr[i]>max){
            max=arr[i]; 
            //  new max value stored.
        }

    }

    cout << max ;
    return 0;
}