// TC :- O(r x c)

#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout << "Enter number of rows in the array: " << endl;
    cin >> r;
    cout << "Enter number of columns in the array: " << endl;
    cin >> c;

    cout << "Enter elements of the matrix separated by spaces " << endl;
    int arr[r][c];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << "Original matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    
    cout << "Transpose of matrix: " << endl;
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
