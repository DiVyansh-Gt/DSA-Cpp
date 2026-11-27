/*
Take an integer n as input. Print the minimum non-negative integer that must be added
to n to make it exactly divisible by 7. Use the modulus operator.
Sample — Input: 20 ⇒ Output: 1 (since 20 + 1 = 21 = 7 × 3)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int remainder = n % 7;
    int result = (7 - remainder) % 7;

    cout << result;

    return 0;
}
