/******************************************************************************

C++
This program will display a custom length multiplication table.
Date: 3/21/2024

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int inputRows, inputCols;
    
    cout << "Multiplication Table Tool\n";
    
    cout << "\n";
    
    cout << "How many rows would you like? ";
    cin >> inputRows;
    cout << "How many columns would you like? ";
    cin >> inputCols;
    
    cout << "\n   ";
    
    for (int numCols = 1; numCols <= inputCols; numCols++)
        cout << setw(5) << numCols;
    
    cout << "\n----";
    
    for (int border = 1; border <= inputCols; border++)
        cout << "-----";

    cout << "\n";
        
    for (int numRows = 1; numRows <= inputRows; numRows++)
    {
        cout << setw(2) << numRows << "|";
        for (int numCols = 1; numCols <= inputCols; numCols++)
            cout << setw(5) << numCols * numRows;
        cout << "\n";
    }

    
    return 0;
}
