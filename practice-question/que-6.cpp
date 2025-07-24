// Q-6. What is the result of the expression: (5 > 3) && (8 < 6)

#include <iostream> 

using namespace std; 

int main (){


    int a ; 

    //  first method
    cout << "First method:" << endl;
    a = (5 > 3) && (8 < 6);

    cout << "the result of the expression: (5 > 3) && (8 < 6): "<< a << endl; 

    //  second method
    cout << "second method:" << endl;
    if ((5 > 3) && (8 < 6)) {

        cout << "condition is true  " << endl;
    }
    else {

        cout << "condition is false  " << endl;
    }

  
    return 0;
}