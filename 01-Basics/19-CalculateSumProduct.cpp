/*
Take four integers a, b, c, d as input. Compute and print (a + b) × (c + d).
Sample — Input: 1 2 3 4 ⇒ Output: 21
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int result = (a + b) * (c + d);

    cout << result;

    return 0;
}
