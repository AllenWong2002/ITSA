#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int hours, hourly_rate;
    double money;
    while (cin >> hours >> hourly_rate){
        if (hours >= 0 && hours <= 60){
            money = hours * hourly_rate;
            cout << fixed << setprecision(1) << money << endl;
        }
        else if (hours > 60 && hours <= 120){
            money = 60 * hourly_rate + ((hours - 60) * hourly_rate * 1.33);
            cout << fixed << setprecision(1) << money << endl;
        }
        else if (hours > 120){
            money = 60 * hourly_rate + 60 * hourly_rate * 1.33 + ((hours - 120) * hourly_rate * 1.66);
            cout << fixed << setprecision(1) << money << endl;
        }
    }
    return 0;
}
