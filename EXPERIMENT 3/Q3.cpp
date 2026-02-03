// TC: O(m)

#include <iostream>
using namespace std;

int power(int n, int m) {
    if (m == 0)
        return 1;
    return n * power(n, m - 1);
}

int main() {
    int n, m;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter m: " << endl;
    cin >> m;
    cout << power(n, m);
    return 0;
}
