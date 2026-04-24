#include <iostream>
using namespace std;

class Queue {
    int arr[100], front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int x) {
        if(rear == 99) {
            cout << "Overflow\n";
            return;
        }
        if(front == -1) front = 0;
        arr[++rear] = x;
    }

    void dequeue() {
        if(front == -1 || front > rear) {
            cout << "Underflow\n";
            return;
        }
        cout << "Removed: " << arr[front++] << endl;
    }

    void display() {
        for(int i = front; i <= rear; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Queue q;
    int choice, x;

    while(true) {
        cout << "\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n";
        cin >> choice;

        if(choice == 1) {
            cin >> x;
            q.enqueue(x);
        }
        else if(choice == 2)
            q.dequeue();
        else if(choice == 3)
            q.display();
        else break;
    }
}
