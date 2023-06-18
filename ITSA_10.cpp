#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    double C, F;
    while (cin >> C){
        F = (9 * C) / 5 + 32;
        cout << fixed << setprecision(1) << F << endl;
    }
    return 0;
}