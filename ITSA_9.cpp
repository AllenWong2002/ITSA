#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i, result;

    while (cin >> i){
        result = pow(2, i);
        if (i > 31)
            cout << "Value of more than 31" << endl;
        else
            cout << result << endl;
    }
    return 0;
}