#include <iostream>
#include <stack>
using namespace std;

int prec(char c) {
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    return 0;
}

int main() {
    string s;
    cout << "Enter infix: ";
    cin >> s;

    stack<char> st;
    string result = "";

    for(char c : s) {
        if(isalnum(c))
            result += c;

        else if(c == '(')
            st.push(c);

        else if(c == ')') {
            while(!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else {
            while(!st.empty() && prec(st.top()) >= prec(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()) {
        result += st.top();
        st.pop();
    }

    cout << "Postfix: " << result;
}
