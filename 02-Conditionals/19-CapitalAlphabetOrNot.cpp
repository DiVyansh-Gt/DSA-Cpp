#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Capital Alphabet";
    }
    else {
        cout << "Not a Capital Alphabet";
    }

    return 0;
}
