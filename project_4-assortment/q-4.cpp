#include <iostream>
using namespace std;

int main()
{

    int row, col;

    //  taking input for size
    cout << "Enter the row's elements: ";
    cin >> row;

    cout << "Enter the col's elements: ";
    cin >> col;

    //  input for data
    cout << "Enter array's Elements :" << endl;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] is: ";
            cin >> arr[i][j];
        }
    }

    //  calculation
    int n, sum = 0;

     cout <<endl;
    cout << "Enter the row Number: ";
    cin >> n;

    cout << "Element of row " << n <<": ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (n == i)
            {
                cout << arr[i][j] << " " ;
                sum = sum + arr[i][j];
            }
        }
    }
    cout << endl;
   cout << "The sum of Row's "<< n << " Element: " << sum << endl;


    //  calculation for column 

    cout <<endl;
    cout << "Enter the col Number: ";
    cin >> n;
    sum=0;

    cout << "Element of col " << n <<": ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (n == j)
            {
                cout << arr[i][j] << "  ";
                sum = sum + arr[i][j];
            }
        }
    }
    cout<<endl;
    cout << "The sum of Col's "<< n << " Element: " << sum << endl;
    return 0;
}
