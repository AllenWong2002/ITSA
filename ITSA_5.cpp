#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double sideLength;
    cin >> sideLength;

    double area = sideLength * sideLength;
    area = round(area * 10) / 10; // 四捨五入取到小數點以下第一位

    cout << fixed << setprecision(1) << area << endl;

    return 0;
}