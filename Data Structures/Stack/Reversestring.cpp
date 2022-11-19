#include <iostream>
#include <cstring>
#include <stack>
using namespace std;


void Reverse(char *C, int n)
{
    stack<char> S;
    for (int i = 0; i < n; i++) {
        S.push(C[i]);
    }
    for (int i = 0; i < n; i++) {
        C[i] = S.top();
        S.pop();
    }
}

int main()
{
    char C[51];
    cout << "Enter a string: ";
    // gets(C);
    cin >> C;
    Reverse(C, strlen(C));
    cout << C;
}

// Time Complexity :- O(n)
// Space Complexity :- O(n)