// TC :- O(n * m)

#include <iostream>
using namespace std;

int main(){
    string src, findstr;

    cout << "Enter source string: ";
    cin >> src;

    cout << "Enter string to find: ";
    cin >> findstr;

    int pos = src.find(findstr);

    if(pos != string::npos)
        cout << "Found at index: " << pos;
    else
        cout << "-1";

    return 0;
}
