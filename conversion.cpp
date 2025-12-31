#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int prec(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;
}

int main() {
    stack<char> s;
    string infix, postfix = "";

    cout << "Enter infix expression: ";
    cin >> infix;

    for (char c : infix) {
        // Operand
        if (isalnum(c)) {
            postfix += c;
        }
        // Left parenthesis
        else if (c == '(') {
            s.push(c);
        }
        // Right parenthesis
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // remove '('
        }
        // Operator
        else {
            while (!s.empty() && prec(s.top()) >= prec(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop remaining operators
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
