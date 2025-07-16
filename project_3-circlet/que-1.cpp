#include <iostream>
using namespace std ; 

int main (){

    int i,j , n; 

    for ( i = 1 ; i<=5 ; i++ ){
        n = 41 ; 
        for (j = 1 ; j<= i ; j++ ){
            cout <<n << " " ;
            n++;
            
        }
        cout << endl; 
    }

    return 0;
}

    // 41 
    // 41 42
    // 41 42 43
    // 41 42 43 44
    // 41 42 43 44 45