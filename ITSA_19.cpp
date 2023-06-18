#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int call_time;
    double call_money;
    while (cin >> call_time){
        if (0 <= call_time && call_time <= 800){
            call_money = (double)call_time * 0.9;
            cout << fixed << setprecision(1) << call_money << endl;
        }
        else if (800 < call_time && call_time < 1500){
            call_money = (double)call_time * 0.9 * 0.9;
            cout << fixed << setprecision(1) << call_money << endl;
        }
        else if (call_time >= 1500){
            call_money = (double)call_time * 0.9 * 0.79;
            cout << fixed << setprecision(1) << call_money << endl;
        }
    }
    return 0;
}