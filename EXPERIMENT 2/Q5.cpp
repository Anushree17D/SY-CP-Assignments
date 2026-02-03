// TC :- O(P)
#include <iostream>
using namespace std;

int main() {
    int P, count = 0;
    cout << "Enter number : " << endl;
    cin >> P;

    while (P != 0) {
        count++;
        P = P / 10;
    }

    cout << count;
    return 0;
}
