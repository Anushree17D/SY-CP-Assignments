#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() { top = NULL; }

    void push(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = top;
        top = temp;
    }

    void pop() {
        if(top == NULL) {
            cout << "Underflow\n";
            return;
        }
        cout << "Popped: " << top->data << endl;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
};

int main() {
    Stack s;
    int choice, x;

    while(true) {
        cout << "\n1.Push 2.Pop 3.Exit\n";
        cin >> choice;

        if(choice == 1) {
            cin >> x;
            s.push(x);
        }
        else if(choice == 2)
            s.pop();
        else break;
    }
}
