#include <iostream>

using namespace std;

int main(){
    int n;
    long long factorial = 1;
    cin >> n;
    if (0 < n && n < 20){
        for (int i = 1; i <= n; i++)
            factorial = factorial * i;
        cout << factorial << endl;
    }
    return 0;
}
