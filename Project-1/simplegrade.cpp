// Project: simple grade calculator.

#include <iostream> 
using namespace std; 

int main (){

    int score ;

    cout << "Enter your score:";
    cin >> score;

    (score <= 100 && score >= 0) ? (score >= 90)   ? cout << "You Got Grade A." << " " << " Excellent Work.!" <<endl
                                   : (score >= 80) ? cout << "You Got Grade B." << " " << " Well done.!" <<endl
                                   : (score >= 70) ? cout << "You Got Grade C." << " " << " Good Work.!" <<endl
                                   : (score >= 60) ? cout << "You Got Grade D." << " " << " Passed,do better next time" <<endl
                                   : (score < 60  ) ? cout << "You Got Grade F." << " " << " You Failed." <<endl
                                                    : cout <<""

                                
                                : cout << "Invalid Number. " << endl ;

    if  ((score <= 100 && score >= 0) && score>=60  ){

        cout << "Congratulations.!! You are Eligible for next level.!";
        
    } else if (score<60 && score >=0)  {
        
        cout << " You are not Eligible.Try again Next time.";

    }else {

    }
    

    return 0;
}