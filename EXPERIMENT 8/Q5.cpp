// TC :- O(n)

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cout << "Enter sentence: ";
    cin.ignore();
    getline(cin, s);

    stringstream ss(s);
    vector<string> words;
    string word;

    while(ss >> word)
        words.push_back(word);

    reverse(words.begin(), words.end()); // STL

    cout << "Reversed words: ";
    for(string w : words)
        cout << w << " ";

    return 0;
}
