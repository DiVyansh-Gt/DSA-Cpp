/*
Take two integers a and b (b ̸= 0) as input. Print the result of ceiling integer division
of a by b.
Ceiling division always rounds up — e.g., ⌈7/2⌉ = 4, whereas normal integer division gives 3.
Hint - Formula for positive integers: (a + b − 1) / b.
Sample — Input: 7 2 ⇒ Output: 4
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int result = (a + b - 1) / b;

    cout << result;

    return 0;
}
