// Develop  a program that prints all alphabets from a to z  by skipping 3 alphabet using do while loop.

#include <iostream>
using namespace std;

int main (){

    char alphabets;
    alphabets ='A';

    do{
        cout << alphabets << "  ";

        alphabets = alphabets + 4;
    } while(alphabets <= 'Z');

    return 0;
}