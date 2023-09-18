//Ryan DeHaan
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> rows >> cols;

    int matrix1[rows][cols], matrix2[rows][cols];

    cout << "Enter the elements of the first matrix:\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin >> matrix1[i][j];
        }
    }


    cout << "Enter the elements of the second matrix:\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin >> matrix2[i][j];
        }
    }


    int sumMatrix[rows][cols];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "The sum of the matrices is:\n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
