#include <iostream>
using namespace std;

int main() {
    float radius;
    float volume;

    cout << "Enter radius: ";
    cin >> radius;

    volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;

    cout << "Volume of Sphere = " << volume;

    return 0;
}
