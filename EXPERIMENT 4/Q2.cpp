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

    bool isSorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (!isSorted) {
        sort(arr, arr + n);
        cout << "Array was not sorted. After sorting:\n";
    } else {
        cout << "Array is already sorted:\n";
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
