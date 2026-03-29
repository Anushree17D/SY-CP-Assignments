#include <iostream>
using namespace std;

void tripleOccurrences(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

        if(arr[i] == key)
            cout << key << " " << key << " ";
    }
}

int main()
{
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter key: ";
    cin >> key;

    cout << "Updated array: ";
    tripleOccurrences(arr, n, key);

    return 0;
}
