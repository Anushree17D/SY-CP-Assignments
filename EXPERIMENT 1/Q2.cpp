#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cout << "Enter the number of rows: " << endl;
    cin >> r ;
    cout << "Enter the number of columns: " << endl;
    cin >> c ;

    vector<vector<int>> mat(r, vector<int>(c));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    cout << "Transpose Matrix:\n";
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}
