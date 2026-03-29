#include <iostream>
using namespace std;

int findPeak(int arr[], int n)
{
    int low = 0, high = n - 1;

    while(low < high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int index = findPeak(arr, n);

    cout << "Peak element index = " << index;
    cout << "\nPeak element value = " << arr[index];

    return 0;
}
