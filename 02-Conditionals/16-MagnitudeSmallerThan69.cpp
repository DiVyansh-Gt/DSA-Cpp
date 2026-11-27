#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (abs(n) < 69) {
        cout << "Magnitude is smaller than 69";
    }
    else {
        cout << "Magnitude is not smaller than 69";
    }

    return 0;
}
