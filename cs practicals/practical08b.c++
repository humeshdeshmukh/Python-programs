#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int matrixA[100][100], matrixB[100][100], resultMatrix[100][100];
    // Input for Matrix A
    cout << "Enter the elements of Matrix A:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrixA[i][j];
        }
    }
    // Input for Matrix B
    cout << "Enter the elements of Matrix B:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrixB[i][j];
        }
    }
    // Add the matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    // Display the result of addition
    cout << "Result of Matrix Addition:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}