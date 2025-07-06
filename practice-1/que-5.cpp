// Q-5. Write a condition using logical operators to check if a number is between 100 and 200 inclusive.

#include <iostream>
using namespace std; 

int main (){

    int number; 

    //  taking input 
    cout <<"Enter you number:" ;
    cin>> number;


    //  condition 
    if ( number>100 && number<200){

        cout << "'"  << number << "'" << " " <<"is between 100 and 200. "<< endl;
    }
    else{

        cout << "'"  << number << "'" << " " <<"is not between 100 and 200." << endl;
    }

    return 0;
}