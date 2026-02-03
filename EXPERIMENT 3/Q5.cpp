// TC: O(2ⁿ)

#include <iostream>
using namespace std;

int countSubsets(int arr[], int n, int sum) {
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;

    return countSubsets(arr, n - 1, sum) +
           countSubsets(arr, n - 1, sum - arr[n - 1]);
}

int main() {
    int n, sum;
    cout << "Enter number : " << endl;
    cin >> n;

    cout << "Enter " << n << " elements in the array: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the sum : " << endl;
    cin >> sum;

    cout << countSubsets(arr, n, sum);
    return 0;
}
