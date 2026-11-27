/*
A circle of radius r is inside a square of side a (the circle always sits completely inside
the square without touching its edges). Find the area of the shaded region — the part inside
the square but outside the circle. Use π = 3.14.
Sample — Input: r = 2, a = 6 ⇒ Output: 23.44
*/

#include <iostream>
using namespace std;

int main() {
    float a, r;

    cin >> a >> r;

    float squareArea = a * a;
    float circleArea = 3.14 * r * r;

    float shadedArea = squareArea - circleArea;

    cout << shadedArea;

    return 0;
}
