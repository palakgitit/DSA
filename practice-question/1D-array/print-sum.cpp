//  Write a program to input n elements into an array and print the sum of all elements.

#include <iostream>
using namespace std; 

int main (){

    int size; 

    
    cout<< "Enter the number of element in array: " ;
    cin >> size; 

    int arr[100] ,sum=0;
    cout << "Enter Elements:" << endl;
    for (int i=0 ; i < size ; i++){

        cout << "arr [" << i << "] : ";
        cin >> arr[i];
        sum=sum+arr[i];
    }


    cout << "The sum of Element is: "<< sum ;
    
}
