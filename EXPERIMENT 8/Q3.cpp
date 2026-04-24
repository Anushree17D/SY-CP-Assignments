// TC :- O(n log n)

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter string 1: ";
    cin >> s1;

    cout << "Enter string 2: ";
    cin >> s2;

    if(s1.length() != s2.length())
    {
        cout << "Not Anagram";
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}
