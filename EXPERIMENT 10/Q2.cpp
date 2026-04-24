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
        q.push(x); // enqueue
    }

    cout << "Queue elements: ";
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop(); // dequeue
    }
}
