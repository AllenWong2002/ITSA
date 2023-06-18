#include <iostream>

using namespace std;

int main(){
    int num;
    bool p = true;

    while (cin >> num){
        for (int i = (num - 1); i > 0; i--){
            for (int j = 1; j < num; j++){
                if (i % j == 0 && i != j && i != 1 && j != 1 && i != num && j != num)
                    p = false;
            }
            if (p == true){
                cout << i << endl;
                break;
            }
            p = true;
        }
    }
}