#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int start_hr, start_min, end_hr, end_min, sum_time, money;
    while (cin >> start_hr >> start_min && cin >> end_hr >> end_min){
        if ((0 <= start_hr && start_hr <= 23) && (0 <= end_hr && end_hr <= 23)){
            if ((0 <= start_min && start_min <= 59) && (0 <= end_min && end_min <= 59)){
                sum_time = (end_hr - start_hr) * 60 + (end_min - start_min);
                if (sum_time <= 120){
                    money = (floor(sum_time / 30)) * 30;
                    cout << money << endl;
                }
                else if (240 >= sum_time && sum_time > 120){
                    money = 4 * 30 + (floor((sum_time - 120) / 30)) * 40;
                    cout << money << endl;
                }
                else if (240 < sum_time){
                    money = 4 * 30 + 4 * 40 + (floor((sum_time - 240) / 30)) * 60;
                    cout << money << endl;
                }
            }
        }
    }
    return 0;
}