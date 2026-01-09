// Time complexity :- O(n)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    vector<int> fib(n);
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    cout << "Fibonacci upto " << n << " :" << endl;
    for (int i = 0; i < n; i++)
        cout << fib[i] << " ";

    return 0;
}
