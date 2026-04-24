#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cout << "Enter postfix: ";
    cin >> s;

    stack<int> st;

    for(char c : s) {
        if(isdigit(c))
            st.push(c - '0');
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if(c == '+') st.push(a + b);
            else if(c == '-') st.push(a - b);
            else if(c == '*') st.push(a * b);
            else if(c == '/') st.push(a / b);
        }
    }

    cout << "Result: " << st.top();
}
