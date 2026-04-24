// TC :- O(n)

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;

    string temp = s;
    reverse(temp.begin(), temp.end());

    if(s == temp)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
