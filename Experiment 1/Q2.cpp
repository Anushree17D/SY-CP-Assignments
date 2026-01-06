// Time Complexity :- O(rows x columns)


#include <iostream>
using namespace std;

int main() {
    int a[10][10], t[10][10];
    int r, c;

    cout << "Enter rows: ";
    cin >> r ;
    cout << "Enter columns: ";
    cin >> c ;


    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Enter elemnt at position " << i <<" and " << j << endl; 
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    cout << "Original matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
