// Write a program that prints the array elements in reverse order.

#include <iostream>
using namespace std;

int main (){

    int size; 

    cout << "Enter the array's Element : ";
    cin >> size;


    int arr[100] ;
    cout << "Enter Elements:" << endl;
    for (int i=0 ; i < size ; i++){

    cout << "arr [" << i << "] : ";
    cin >> arr[i];

    }

    // reversed array elements:

    cout <<"Reversed array elements: ";
    
    for (int i=size-1 ; i >=0 ; i--){

    cout  << arr[i] << " ";
    

    }
    cout <<endl;


    return 0; 
}