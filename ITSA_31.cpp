#include <iostream>

using namespace std;

int main(){
    int N, sum;
    while (cin >> N){
        for (int i = 1; i <= N; i++){
            if (i % 2 == 0 && i % 3 == 0 && i % 12 != 0)
                sum = sum + i;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}