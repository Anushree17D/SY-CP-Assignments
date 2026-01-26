#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    vector<int> fib(n);

    if (n > 0) fib[0] = 0;
    if (n > 1) fib[1] = 1;

    for (int i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    cout << "The Fibonacci Series up to " << n << " : " << endl;
    for (int x : fib){
        cout << x << " ";
    }

    return 0;
}
