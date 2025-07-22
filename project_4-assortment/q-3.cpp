#include <iostream>
using namespace std;

int main (){

    int size;

    cout << "Enter the rows & colums size: ";
    cin >> size; 

    cout << "Enter array's Elements :" << endl;
    int arr[size][size];
    for (int i=0; i< size ; i++){
        for (int j=0; j< size ; j++){
            cout << "a["<< i<<"]["<< j <<"] is: ";
            cin >> arr[i][j];
        }
    }

    //  before transpose
    cout << "Array's Elements before :" << endl;
     for (int i=0; i< size ; i++){
        for (int j=0; j< size ; j++){
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }

     //  After transpose
    cout << "Array's Elements After :" << endl;
     for (int i=0; i< size ; i++){
        for (int j=0; j< size ; j++){
            cout <<  arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}