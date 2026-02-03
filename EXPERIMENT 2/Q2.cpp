// TC :- O(N^2)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter number: " << endl;
    cin >> N;
    
    cout << "Enter " << N << "elements of the array:" << endl;
    vector<int> arr(N);
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int maxAND = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int currentAND = arr[i] & arr[j];
            if (currentAND > maxAND){
                maxAND = currentAND;
            }
        }
    }

    cout << "Maximum AND value is: " << maxAND;
    return 0;
}
