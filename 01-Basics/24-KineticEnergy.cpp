/*
Compute the Kinetic Energy of a moving object. Take the Mass m (in kg, double) and
Velocity v (in m/s, double) as input from the user. Be careful about integer vs. double division
when applying the fraction coefficient.
KE =
1
2
× m × v
2
Sample — Input: m = 10, v = 4 ⇒ Output: 80
*/

#include <iostream>
using namespace std;

int main() {
    double m, v;
    cin >> m >> v;

    double KE = (1.0 / 2.0) * m * v * v;

    cout << KE;

    return 0;
}
