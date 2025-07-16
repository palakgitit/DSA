// Dvelop a program to count total number of digits in a number.

#include <iostream>
using namespace std;

int main (){

    int Num , NumCount;

    NumCount = 0;

    cout <<"Enter Number: " ;
    cin >> Num; 

    do{

        Num = Num/10;
        NumCount++;
    } while(Num != 0 );

    cout << "Total number of digits in a number : " << NumCount;
    return 0; 

}

// limited to 10 only