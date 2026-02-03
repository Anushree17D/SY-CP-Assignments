// TC :- O(1)

#include <iostream>
using namespace std;

int main() {
    int N, n;
    cout << "Enter N: " << endl;
    cin >> N;
    cout << "Enter n: " << endl;
    cin >> n;

    
    if ((N >> n) & 1){
        cout << "SET";
    }else{
        cout << "CLEAR";
    }

    return 0;
}
