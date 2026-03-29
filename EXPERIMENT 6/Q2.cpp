#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    int low = 0, high = n - 1, result = -1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            result = mid;
            high = mid - 1;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return result;
}

int main()
{
    int n, key;

    cout << "Enter size (sorted array): ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter key: ";
    cin >> key;

    int index = firstOccurrence(arr, n, key);

    if(index != -1)
        cout << "First occurrence index = " << index;
    else
        cout << "Element not found";

    return 0;
}
