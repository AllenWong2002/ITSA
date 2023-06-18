#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    while (true) {
        int upperBase, lowerBase, height;
        if (!(cin >> upperBase >> lowerBase >> height)) {
            break;
        }

        double area = static_cast<double>((upperBase + lowerBase) * height) / 2.0;

        cout << "Trapezoid area:" << fixed << setprecision(1) << area << endl;
    }

    return 0;
}