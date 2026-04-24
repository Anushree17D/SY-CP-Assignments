// TC :- O(n log n + m log m)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> a(n1);
    cout << "Enter elements: ";
    for(int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> b(n2);
    cout << "Enter elements: ";
    for(int i = 0; i < n2; i++)
        cin >> b[i];

    vector<int> result;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    set_intersection(a.begin(), a.end(),
                     b.begin(), b.end(),
                     back_inserter(result));

    cout << "Intersection: ";
    for(int x : result)
        cout << x << " ";

    return 0;
}
