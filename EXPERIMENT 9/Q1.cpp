#include <iostream>
using namespace std;

class Stack {
    int top;
    int arr[100];

public:
    Stack() { top = -1; }

    void push(int x) {
        if(top == 99) {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if(top == -1) {
            cout << "Underflow\n";
            return;
        }
        cout << "Popped: " << arr[top--] << endl;
    }

    void peek() {
        if(top == -1) cout << "Empty\n";
        else cout << "Top: " << arr[top] << endl;
    }
};

int main() {
    Stack s;
    int choice, x;

    while(true) {
        cout << "\n1.Push 2.Pop 3.Peek 4.Exit\n";
        cin >> choice;

        if(choice == 1) {
            cin >> x;
            s.push(x);
        }
        else if(choice == 2)
            s.pop();
        else if(choice == 3)
            s.peek();
        else break;
    }
}
