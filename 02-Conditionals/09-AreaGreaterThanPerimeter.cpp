#include <iostream>
using namespace std;

int main() {
    double length, breadth;
    cin >> length >> breadth;

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        cout << "Area is greater than Perimeter";
    }
    else {
        cout << "Area is not greater than Perimeter";
    }

    return 0;
}
