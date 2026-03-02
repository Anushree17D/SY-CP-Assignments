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

    int tableSize;
    cout << "Enter hash table size: ";
    cin >> tableSize;

    int hashTable[tableSize];

    for (int i = 0; i < tableSize; i++)
        hashTable[i] = -1;

    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int index = key % tableSize;

        while (hashTable[index] != -1) {
            index = (index + 1) % tableSize;
        }

        hashTable[index] = key;
    }

    cout << "\nHash Table:\n";
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1)
            cout << "Index " << i << " -> " << hashTable[i] << endl;
        else
            cout << "Index " << i << " -> EMPTY\n";
    }

    return 0;
}
