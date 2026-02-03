// TC :- O(n)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number: " << endl;
    cin >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + log10(i);
    }

    int digits = (int)sum + 1;

    cout << "The number of digits in the factorial of " << n << " is : " << digits;
    return 0;
}
