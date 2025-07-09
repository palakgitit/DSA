// Develop a program to find the sum of a first an last digit of number. 

#include <iostream>
using namespace std;

int main (){

    int num , first , Last ,total;

    cout << "Enter Number: ";
    cin >> num; 
    
    total = 0; 
    Last = num % 10; 
    first = num; 

    while ( first>=10){
        first =first /10;

    }

    total = first + Last; 
    cout << "The total of " << first << " and " << Last << " is: " << total ; 


    return 0;
}