//  Q-8. a + b * c - d / e

#include<iostream>
using namespace std;

int main () {

    int a , b , c , d , e , Total; 

    cout << " Enter A:"  ;
    cin >> a;
    
    cout << " Enter B:" ;
    cin >> b;

    cout << " Enter C:"  ;
    cin >> c;

    cout << " Enter D:" ;
    cin >> d;

    cout << " Enter E:" ;
    cin >> e;


    Total = a + b * c - d / e;
    cout << " Total is:" << Total << endl;

    return 0;
}