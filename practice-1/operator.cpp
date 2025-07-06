
// Write a program to input two integers and display their sum, difference, product, quotient, and remainder.


#include <iostream>
using namespace std; 

int main (){

    int num1 , num2 , sum , difference , product ,quotient , reminder ;

    cout << "Enter your first digit:" ;
    cin >> num1;
    cout << "Enter your second digit:" ;
    cin >> num2;

    sum = num1 + num2; 
    cout << "Answer of sum:" << sum << endl ; 

    difference = num1 - num2; 
    cout << "Answer of difference:" << difference  << endl; 

    product = num1 * num2; 
    cout << "Answer of product:" << product  << endl; 

    quotient = num1 / num2; 
    cout << "Answer of quotient:" << quotient  << endl; 

    reminder = num1 % num2; 
    cout << "Answer of reminder:" << reminder << endl ; 



    return 0;
}