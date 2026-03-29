#include <iostream>
using namespace std;

void findPair(int arr[], int n, int X)
{
    int left = 0, right = n - 1;

    while(left < right)
    {
        int sum = arr[left] + arr[right];

        if(sum == X)
        {
            cout << "Pair found: " << arr[left] << " " << arr[right];
            return;
        }
        else if(sum < X)
            left++;
        else
            right--;
    }

    cout << "No pair found";
}

int main()
{
    int n, X;

    cout << "Enter size (sorted array): ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> X;

    findPair(arr, n, X);

    return 0;
}
