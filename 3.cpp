#include <iostream>
#include <stack>
#include <string>

using namespace std;



int main() {
    string s;
    cin >> s;
    stack<char> st;
    char f = 't';
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) {
                f = f;
            }
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                f = f;
            }
        }
    }
    if (f == 't') {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}
