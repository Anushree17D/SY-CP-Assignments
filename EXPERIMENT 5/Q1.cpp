#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int tableSize = n;  
    int hashTable[tableSize];
    
    for (int i = 0; i < tableSize; i++)
        hashTable[i] = -1;

    for (int i = 0; i < n; i++) {
        int index = arr[i] % tableSize;
        hashTable[index] = arr[i];   
    }

    cout << "\nHash Table:\n";
    for (int i = 0; i < tableSize; i++) {
        cout << "Index " << i << " -> " << hashTable[i] << endl;
    }

    return 0;
}
