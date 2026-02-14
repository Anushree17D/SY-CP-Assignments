// TC :- O(N)

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter elements of the array separated by spaces " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        
     int maxRight = arr[n - 1];

    cout << maxRight << " ";  

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            cout << arr[i] << " ";
            maxRight = arr[i];
        }
    }

    return 0;
}
