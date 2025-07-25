#include <iostream>
using namespace std;

void sum (int num1 , int num2){

    cout<< "The sum of " << num1 << " & " << num2 <<" is: "<< num1+num2 << endl; 
    cout  << endl;
}

void Subs (int num1 , int num2){

    int Subs;
    Subs=num1-num2;
    cout<< "The substraction of " << num1 << " & " << num2 <<" is: "<< Subs << endl; 
    cout  << endl;
}

void Multiplication (int num1 , int num2){

    cout<< "The Multiplication of " << num1 << "&" << num2 <<" is: "<< num1*num2 << endl; 
    cout  << endl;
}
void Division (int num1 , int num2){

    int div;
    if (num1==0 || num2==0){

        cout << "Number cannot be divided with zero.";
        cout  << endl;
    }else {

        div=num1/num2;
        cout<< "The Division of " << num1 << " & " << num2 <<" is: "<< div << endl; 
        cout  << endl;
    }
}

void modulas (int num1 , int num2){

    int mod;
    if (num1==0 || num2==0){

        cout << "Number cannot be divided with zero."<< endl;
        cout  << endl;
    }else {

        mod=num1%num2;
        cout<< "The modulas of " << num1 << " & " << num2 <<" is: "<< mod << endl; 
        cout  << endl;
    }

   
}



int main (){

    int choice , num1 , num2; 


    while(choice != 0){
    cout << "---------------------------------"<<endl;
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
        cout << "You choose Exiting...\n";
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

        case 3:
        Multiplication( num1 ,  num2);
        break;

        case 4:
        Division( num1 ,  num2);
        break;

        case 5:
        modulas( num1 ,  num2);
        break;

        default:
        cout<< "Invalid input..";
        break; 


    }
    }

    return 0;
}