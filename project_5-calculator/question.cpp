#include <iostream>
using namespace std;

void sum (int num1 , int num2){

    cout<< "The sum of " << num1 << "&" << num2 <<" is: "<< num1+num2 << endl; 
}

void Subs (int num1 , int num2){

    cout<< "The substraction of " << num1 << "&" << num2 <<" is: "<< num1-num2 << endl; 
}

int main (){

    int choice , num1 , num2; 

    cout << "The choices : "<<endl;
    cout << "Press 1: for +  " << endl;
    cout << "Press 2: for - " << endl;
    cout << "Press 3: for *  " << endl;
    cout << "Press 4: for / " << endl;
    cout << "Press 5: for % " << endl;
    cout << "Press 0: for The Exit " << endl << endl;

    cout << "Enter your choice: " ;
    cin >> choice;

    if (choice == 0) {
        cout << "Exiting...\n";
        return 0;
    }


    cout <<"Enter first number: ";
    cin >> num1;

    cout <<"Enter Second number: ";
    cin >> num2;

    switch (choice){

        case 1:
        sum( num1 ,  num2);
        break;

        case 2:
        Subs( num1 ,  num2);
        break;

        

        default:
        cout<< "Invalid input..";
        break; 


    }

    return 0;
}