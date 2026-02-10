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

      int idx = 0;  

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[idx] = arr[i];
            idx++;
        }
    }

    while (idx < n) {
        arr[idx] = 0;
        idx++;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
