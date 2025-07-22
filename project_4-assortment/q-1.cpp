#include <iostream>

using namespace std;

int main (){

    int size;

    cout << "Enter array size:";
    cin >> size;

    int arr[size];
   
    cout << "Enter array's Elements :" << endl;
    for (int i=0 ; i< size ; i++){
        cout << "a[" << i << "]:" ;
        cin>> arr[i];
    }

    // to find negative number 
    cout << "Negative number : " ;
    for (int i=0 ; i<size; i++){
        if (arr[i] < 0 ){
         cout << arr[i] << " " ;
        }
      
    }


    return 0;
}


