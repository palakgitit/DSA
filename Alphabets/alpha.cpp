#include <iostream>
using namespace std;

int main (){

    int i ;

    // A

    cout<< "Alphabet : A" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if(i==1){

            cout<<" *  *  * ";
        }else  if( i==3){

            cout<<"* * * * *";
        }
        else{

            cout<<"*       *";
        }
        cout << endl;
    }

    cout<< "Alphabet : B" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if(i==1 || i==3 || i==5){

            cout<<"* * * *  ";
        }
        else{

            cout<<"*      *";
        }
        cout << endl;
    }

     cout<< "Alphabet : C" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if(i==1  || i==5){

            cout<<"   * *   ";
        } 
        else if (i==3){

            cout<<"*      ";
        }
        else{

            cout<<" * ";
        }
        cout << endl;
    }
      cout<< "Alphabet : D" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if(i==1  || i==5){

            cout<<"* * *  ";
        } 
        else{

            cout<<"*     * ";
        }
        cout << endl;
    }

    cout<< "Alphabet : E" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if(i==1  || i==5 || i==3){

            cout<<"* * * * ";
        } 
        else {

            cout<<"* ";
        }
        cout << endl;
    }

    cout<< "Alphabet : F" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if(i==1  || i==3){

            cout<<"* * * * ";
        } 
        else {

            cout<<"* ";
        }
        cout << endl;
    }

    cout<< "Alphabet : H" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if(i==3){

            cout<<"* * * * * ";
        } 
        else {

            cout<<"*       * ";
        }
        cout << endl;
    }

    cout<< "Alphabet : I" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if(i==1  || i==5 ){

            cout<<"* * * * * ";
        } 
        else {

            cout<<"    *   ";
        }
        cout << endl;
    }

    cout<< "Alphabet : J" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if(i==1){
            cout<<"* * *  ";
            
        } else if ( i==5){

            cout <<" * *";
        }
        else if( i==4){
            cout<<"*   *";
        }
        else {
            cout<<"    *   ";
        }
        cout << endl;
    }

    cout<< "Alphabet : L" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if( i==5 ){

            cout<<"* * * * ";
        } 
        else {

            cout<<"* ";
        }
        cout << endl;
    }

     cout<< "Alphabet : O" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if( i==5 || i==1){

            cout<<"  *   *  ";
        } 
        else  {

            cout<<"*       *";
        }
        cout << endl;
    }

    cout<< "Alphabet : P" <<endl;
    cout << endl;

     for (i=1;i<=5;i++){

        if (i==1 || i==3 ){

            cout<<"* * * * ";

        }else if (i==2) {

            cout << "*      *";

        }else {

             cout << "*         ";

        }
        
        cout<<endl;
    }

     cout<< "Alphabet : T" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if( i==1 ){

            cout<<"* * * * ";
        } 
        else {

            cout<<"   * ";
        }
        cout << endl;
    }

     cout<< "Alphabet : U" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if( i==5 ){

            cout<<"  * * *  ";
        } 
        else {
            cout<<"*       * ";
            
        }
        cout << endl;
    }

     cout<< "Alphabet : V" <<endl;
    cout << endl;

    for (i=1 ; i<=5;i++){

        if( i==1 ){

            cout<<"*         *";
        } 
        else if (i==2){
            cout<<" *       *";
            
        }
        else if (i==3){

            cout<<"  *     *";
        }
        else if (i==4){

            cout<<"   *   *";
        }
        else {

            cout<<"     *";
        }
        cout << endl;
    }
    
}