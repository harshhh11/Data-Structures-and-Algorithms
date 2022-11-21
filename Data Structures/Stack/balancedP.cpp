// Given a string comprising only of opening and closing characters of paranthesis, braces or brackets
// we want to check for balancing

#include <bits/stdc++.h>
using namespace std;

bool ArePair(char opening, char closing) {
    if (opening == '(' && closing == ')') return true;
    else if(opening == '{' && closing == '}') return true;
    else if(opening == '[' && closing == ']') return true;
    return false;
}

bool checkBalancedParanthesis(string exp){
    stack<char> S;
    int n = exp.length();
    for (int i = 0; i < n; i++) {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            S.push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (S.empty() || !ArePair(S.top(), exp[i])) {
                return false;
            }
            else {
                S.pop();
            }
        }
    }
    return S.empty() ? true : false;
}

int main(){
    string expression;
    cout << "Enter a expression: ";
    cin >> expression;
    bool test = checkBalancedParanthesis(expression);
    if (test) {
        cout << "Balanced\n";
    } else {
        cout << "Unbalanced\n";
    }
}