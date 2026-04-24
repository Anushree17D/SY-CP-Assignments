#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }

    int count = 0;
    queue<int> temp = q; // copy

    while(!temp.empty()) {
        temp.pop();
        count++;
    }

    cout << "Size of queue: " << count;
}
