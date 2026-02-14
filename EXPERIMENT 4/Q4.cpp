// TC :- O(N)

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
        
    int first = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
