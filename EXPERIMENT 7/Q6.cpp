// TC :- O(n²)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    bool found = false;

    for(int i = 0; i < n-2; i++){
        int left = i + 1;
        int right = n - 1;

        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];

            if(sum == 0){
                cout << "Triplet: " << arr[i] << " " << arr[left] << " " << arr[right] << endl;
                found = true;
                left++;
                right--;
            }
            else if(sum < 0)
                left++;
            else
                right--;
        }
    }

    if(!found)
        cout << "No triplets found";

    return 0;
}
