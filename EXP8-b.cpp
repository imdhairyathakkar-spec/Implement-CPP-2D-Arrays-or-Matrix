//Dhairya THakkar
//24070123037
//A2
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the number of rows: ";
    cin >> a;
    cout << "Enter the number of columns: ";
    cin >> b;

    int c[100][100], d[100][100], s[100][100];
    cout << "ADDITION OF " << a << " X " << b << " MATRIX" << endl;

    cout << "Enter elements of first matrix:"<<endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> c[i][j];
        }
    }
    cout << "The  first matrix is:" << endl;
    for(int i = 0; i <a; ++i) {
        for(int j = 0; j < b; ++j) {
            cout << c[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Enter elements of second matrix:"<<endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> d[i][j];
        }
    }
    cout << "The second matrix is:" << endl;
    for(int i = 0; i <a; ++i) {
        for(int j = 0; j < b; ++j) {
            cout << d[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            s[i][j] = c[i][j] + d[i][j];
        }
    }

    cout << "Sum of the two matrices:"<<endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << s[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}

/* 
Output :
Enter the number of rows: 2
Enter the number of columns: 2
ADDITION OF 2 X 2 MATRIX
Enter elements of first matrix:
Element [0][0]: 3
Element [0][1]: 4
Element [1][0]: 3
Element [1][1]: 4
The  first matrix is:
3  4
3  4
Enter elements of second matrix:
Element [0][0]: 2
Element [0][1]: 2
Element [1][0]: 34
Element [1][1]: 4
The second matrix is:
2  2
34  4
Sum of the two matrices:
5 6
37 8
*/
