// TC :-

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;

    unordered_map<char, int> freq;

    for(char c : s)
        freq[c]++;

    for(int i = 0; i < s.length(); i++)
    {
        if(freq[s[i]] > 1)
        {
            cout << "Index: " << i;
            return 0;
        }
    }

    cout << "-1";
    return 0;
}
