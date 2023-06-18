#include <cmath>
#include <iostream>

using namespace std;

int main(){
    int num, count = 0;
    cin >> num;
    for (int j = 1; j <= num; j++){
        if (num % j == 0)
            count++;
    }
    if (count == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
