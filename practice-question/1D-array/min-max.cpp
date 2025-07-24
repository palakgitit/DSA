//  Input n integers into a 1D array. Find the maximum and minimum values in the array.

#include <iostream>
using namespace std; 

int main (){

    int size; 

    
    cout<< "Enter the number of element in array: " ;
    cin >> size; 

    int arr[100] ;
    cout << "Enter Elements:" << endl;
    for (int i=0 ; i < size ; i++){

        cout << "arr [" << i << "] : ";
        cin >> arr[i];
    }

    //  max value 

    cout << "The Maximum Element: ";
    int max=arr[0];
    for (int i = 0 ; i <size ;i++){

        if (arr[i] > max ){
            max = arr[i];
        }
    }
    cout << max << endl;

     cout << "The Minimum Element: ";
    int min=arr[0];
    for (int i = 0 ; i <size ;i++){

        if (arr[i] < min ){
            min = arr[i];
        }
    }
    cout << min << endl;




    return 0; 

}
