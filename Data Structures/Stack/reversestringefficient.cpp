#include <iostream>
#include <cstring>
using namespace std;

void Reverse(char *C, int n){
    int i, j = n-1;
    for(i = 0; i < j; i++,j--){
        char temp = C[i];
        C[i] = C[j];
        C[j] = temp;
    }
}

int main() {
    char C[61];
    cout << "Enter a string: ";
    cin >> C;
    Reverse(C, strlen(C));
    cout << C;
}

