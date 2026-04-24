#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cout << "Enter expression: ";
    cin >> s;

    stack<char> st;

    for(char c : s) {
        if(c == '(' || c == '{' || c == '[')
            st.push(c);
        else {
            if(st.empty()) {
                cout << "Not Balanced";
                return 0;
            }

            char top = st.top();
            st.pop();

            if((c == ')' && top != '(') ||
               (c == '}' && top != '{') ||
               (c == ']' && top != '[')) {
                cout << "Not Balanced";
                return 0;
            }
        }
    }

    if(st.empty()) cout << "Balanced";
    else cout << "Not Balanced";
}
