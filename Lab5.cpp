// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// LAb4.cpp : This file contains the 'main' function.Program execution begins and ends there.
//name:Artem Samusev
//Matrix library

#include <iostream>
using namespace std;
void showMenu() {
    cout << "\n1) Fill Matrix with random numbers";
    cout << "\n2) Sum of a specific row";
    cout << "\n3) Sum of a specific column";
    cout << "\n4) Show matrix";
    cout << "\n5) Make Identity Matrix";
    cout << "\n6) Test if Identity Matrix";
    cout << "\n7) Sum of Diagonal";
    cout << "\n8) Sum of all rows";
    cout << "\n9) advanced option 2";
    cout << "\n0) Exit";
    cout << "\nEnter choice: ";
}
int main() {
    int choice = 0, num;

    const int MAX_ROW = 5;
    double mat[MAX_ROW][MAX_COL];
    double* sumRows;
    do {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            fillWithRandomNum(mat, MAX_ROW);
            break;
        case 2:
            int row;
            cout << "\nEnter the row you want to sum: ";
            cin >> row;

            cout << "\nSum of row is: " << sumOfRow(mat, row, MAX_ROW);
            break;
        case 3:
            sumOfCol(mat, MAX_COL, MAX_ROW);
            break;
        case 4:
            printMatrix(mat, MAX_ROW);
            break;
        case 5:
            cout << "enter a number";
            cin >> num;
            if (makeIdentityMatrix(mat, MAX_ROW, num))

                break;
        case 6:
            if (isIdentityMatrix(mat, MAX_ROW))
                cout << "\nMatrix is an identity matrix";
            else
                cout << "\nMatrix is NOT an identity matrix";
            break;
        case 7:
            cout << "\nSum of diagonal is: " << sumOfDiagonal(mat, MAX_ROW);
            break;
        case 8:
            sumRows = sumOfRows(mat, MAX_ROW);

            for (int i = 0; i < MAX_ROW; ++i)
                cout << "\nSum of row " << i << ": " << sumRows[i];

            delete[] sumRows;
            break;
        case 0:
            break;
        default:
            cout << "\nWrong choice";
        }
    } while (choice != 0);

    cout << "\nHave a nice day:)";
    return 0;
}

