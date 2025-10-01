//Dhairya Thakkar
//24070123037
//A2
#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;

    cout << "Enter rows of first matrix: ";
    cin >> a;
    cout << "Enter columns of first matrix: ";
    cin >> b;

    cout << "Enter rows of second matrix: ";
    cin >> x;
    cout << "Enter columns of second matrix: ";
    cin >> y;

    if (b != x) {
        cout << "Invalid conditions ";
    }

    int c[100][100], d[100][100], p[100][100];

    cout << "Enter elements of first matrix:"<<endl;
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < b; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> c[i][j];
        }

    cout << "Enter elements of second matrix:"<<endl;
    for (int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> d[i][j];
        }

    for (int i = 0; i < a; ++i)
        for (int j = 0; j < y; ++j) {
            p[i][j] = 0;
            for (int k = 0; k < b; ++k)
                p[i][j] += c[i][k] * d[k][j];
        }

    cout << "Product of the two matrices:"<<endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < y; ++j)
            cout << p[i][j] << "  ";
        cout << endl;
    }

    return 0;
}
/* output:
Enter rows of first matrix: 2
Enter columns of first matrix: 2
Enter rows of second matrix: 2
Enter columns of second matrix: 2
Enter elements of first matrix:
Element [0][0]: 3
Element [0][1]: 2
Element [1][0]: 4
Element [1][1]: 2
Enter elements of second matrix:
Element [0][0]: 2
Element [0][1]: 3
Element [1][0]: 4
Element [1][1]: 2
Product of the two matrices:
14  13  
16  16  */
