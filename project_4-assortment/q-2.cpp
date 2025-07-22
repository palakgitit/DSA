#include <iostream>
using namespace std;

int main (){

    int   row , col ;

    cout << "Enter the Row's size: ";
    cin >> row;

    cout << "Enter the Col's size: ";
    cin >> col;

    //  largest number from 2D array. 
    cout << "Enter array's Elements :" << endl;
    int arr[row][col];
    for (int i=0 ; i < row ; i++){
        for (int j=0 ; j < col; j++){
            cout << "Enter the array [" << i <<"][" << j <<"] : "; 
            cin >> arr[i][j];
        }
    }

    //  finding the number

    int max = arr[0][0];
    for (int i=0 ; i < row ; i++){
        for (int j=0 ; j < col; j++){
            if (arr[i][j] > max){
                max=arr[i][j];
            }
        }
    }

    cout << "Largest element is: " << max;

    return 0; 

}