#include <cmath>
#include <iostream>

using namespace std;

int main(){
    int num;
    double Armstrong, a, b, c;
    while (cin >> num){
        a = floor(num / 100);
        b = num / 10 % 10;
        c = num % 10;
        Armstrong = pow(a, 3) + pow(b, 3) + pow(c, 3);
        if (num == Armstrong)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}