//  Given an array of integers, count how many are even and how many are odd.

#include <iostream>
using namespace std;

int main(){

    int size ,count=0;

    cout<< "Enter the Number: ";
    cin>> size;

    int arr[size];
    cout << "The elements of array: "<< endl; 
    for (int i =0 ; i<size ;i++){
        cout << " a[" << i<<"] : ";
        cin >> arr[i]; 
    }


    cout << endl;

    cout<<" Even are : "; 
     for (int i =0 ; i<size ;i++){
            if (arr[i]%2==0 ){
            count++;
        }
        
    }
    cout << count << " " ;

    cout << endl;
    cout<<" Odds are : "; 
    count=0;
     for (int i =0 ; i<size ;i++){
        if (arr[i]%2!=0){
            count++;
        }
    }
     cout << count << " " ;




    
    
    return 0; 
}