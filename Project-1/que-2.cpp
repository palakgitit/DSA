// Project: simple grade calculator.

#include <iostream> 
using namespace std; 

int main (){

    int score ;
    char grade ;


    cout << "Enter your score:";
    cin >> score;

    
    if (score < 0 || score > 100){

        cout << "Invalid user input. Enter number between 0 to 100.";
        return 1; 
    }
    //   grade giving. 
   grade =   (score >= 90 )   ? 'A'
             : (score >= 80) ? 'B'
             : (score >= 70) ?'C'
             : (score >= 60) ?'D' 
             : 'F';
                                

     cout <<"You got Grade " << grade << ".";
    //  grade with message. 
    switch (grade ){

        case 'A':
        cout  << " " << "Excellent work! " ;
        break;
        case 'B':
        cout  << " " << "Well done.! ";
        break;
        case 'C':
        cout << " " << " Good Job ";
        break;
        case 'D':
        cout << " " << " You Passed. ";
        break;
        case 'F':
        cout << " " << "Sorry , you failed. ";
        break;
        default:
        cout<< "invalid user input.";
        break;
    }


   

    return 0;
}