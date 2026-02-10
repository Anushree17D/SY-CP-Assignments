#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter elements of the array separated by spaces " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = -1e9;
    int secondLargest = -1e9;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest Element: " << secondLargest;
    return 0;
}
