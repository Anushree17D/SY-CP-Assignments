// Time Complexity :- O(n)

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s;
    cout << "Enter your string : " << endl;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int count = 0;

    while (ss >> word)
        count++;

    cout << "Number of words in the string you entered are: " << count;
    return 0;

}
