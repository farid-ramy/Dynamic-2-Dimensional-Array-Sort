#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows : ";
    cin >> row;
    cout << "Enter the number of columns :";
    cin >> col;
    double** arr = new double* [row];

    for (int i = 0; i < row; i++)
        arr[i] = new double[col];

    for (int i = 0; i < row; i++) {
        cout << "Enter the column (" << i << ")" << endl;
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "choose the way you want to sort :\na.row\nb.col\nc.both\n";
    char x;
    cin >> x;
    switch (x) {
    case'a': //row
        for (int k = 0; k < row; k++) {
            for (int i = 0; i < col; i++) {
                for (int j = i; j < col; j++) {
                    if (arr[k][i] > arr[k][j]) {
                        int temp = arr[k][i];
                        arr[k][i] = arr[k][j];
                        arr[k][j] = temp;
                    }
                }
            }
        }
        break;
    case'b': //col
        for (int k = 0; k < col; k++) {
            for (int i = 0; i < col; i++) {
                for (int j = i; j < row; j++) {
                    if (arr[i][k] > arr[j][k]) {
                        int temp = arr[i][k];
                        arr[i][k] = arr[j][k];
                        arr[j][k] = temp;
                    }
                }
            }
        }
        break;
    case 'c': // Both
        for (int k = 0; k < row; k++) {
            for (int i = 0; i < col; i++) {
                for (int j = i; j < col; j++) {
                    if (arr[k][i] > arr[k][j]) {
                        int temp = arr[k][i];
                        arr[k][i] = arr[k][j];
                        arr[k][j] = temp;
                    }
                }
            }
        }
        for (int k = 0; k < col; k++) {
            for (int i = 0; i < col; i++) {
                for (int j = i; j < row; j++) {
                    if (arr[i][k] > arr[j][k]) {
                        int temp = arr[i][k];
                        arr[i][k] = arr[j][k];
                        arr[j][k] = temp;
                    }
                }
            }
        }
    }
    //Display
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}