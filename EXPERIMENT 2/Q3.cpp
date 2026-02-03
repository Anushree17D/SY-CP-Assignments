// TC :- O(1)

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number: " << endl;
    cin >> N;

    if (N & 1)
        cout << "ODD";
    else
        cout << "EVEN";

    return 0;
}
