// TC :- O(n log n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter k: ";
    cin >> k;

    sort(arr.begin(), arr.end());

    cout << "Kth smallest element: " << arr[k-1];

    return 0;
}
