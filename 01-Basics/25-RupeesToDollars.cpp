/*
Take an amount in Rupees (double) and convert it to Dollars, given that 1 Dollar =
100 Rupees.
Sample — Input: 250 ⇒ Output: 2.5
*/

#include <iostream>
using namespace std;

int main() {
    double rupees;
    cin >> rupees;

    double dollars = rupees / 100.0;

    cout << dollars;

    return 0;
}
