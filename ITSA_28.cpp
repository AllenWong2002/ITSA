#include <iostream>

using namespace std;

int main(){
    int num;
    while (cin >> num){
        for (int i = 1; i <= num; i++){
            if (i % 35 == 0){
                if (num - i < 35)
                    cout << i;
                else
                    cout << i << " ";
            }
        }
        cout << "" << endl;
    }
    return 0;
}