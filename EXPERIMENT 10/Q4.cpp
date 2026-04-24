#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int choice, x;

    while(true) {
        cout << "\n1.Push Front 2.Push Back 3.Pop Front 4.Pop Back 5.Display 6.Exit\n";
        cin >> choice;

        if(choice == 1) {
            cin >> x;
            dq.push_front(x);
        }
        else if(choice == 2) {
            cin >> x;
            dq.push_back(x);
        }
        else if(choice == 3) {
            if(!dq.empty()) dq.pop_front();
        }
        else if(choice == 4) {
            if(!dq.empty()) dq.pop_back();
        }
        else if(choice == 5) {
            for(int v : dq)
                cout << v << " ";
        }
        else break;
    }
}
