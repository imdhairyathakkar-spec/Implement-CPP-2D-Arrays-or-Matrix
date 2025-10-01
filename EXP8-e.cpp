// Dhairya Thakkar
//24070123037
//A2
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter number of rows : ";
    cin >> a;
    
    cout << "Enter number of columns : ";
    cin >> b;
    
    int matrix[a][b];
    int transpose[b][a];
    
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> matrix[i][j];
        }
    }
    
    
    cout << "\nOriginal matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    cout << "\nTranspose of the matrix:\n";
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << transpose[i][j] << "  ";
        }
        cout << endl;
    }
    
    return 0;
}

/* output:
Enter number of rows : 2
Enter number of columns : 2
Enter elements of the matrix:
1
2
3
4

Original matrix:
1  2
3  4

Transpose of the matrix:
1  3
2  4
*/
