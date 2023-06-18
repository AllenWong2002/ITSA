#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num;
    int judgment = 0;
    int a[8] = {0};
    while (cin >> num){
        if (num > 0 && num <= 127){
            for (int i = 1; i < 8; i++){
                if (num >= pow(2, (7 - i))){
                    num = num - (int)(pow(2, (7 - i)));
                    a[i] = 1;
                }else
                    a[i] = 0;
            }
        }
        else if (num == -128)
            a[0] = 1;
        else if (num < 0 && num > -128){
            for (int i = 1; i < 8; i++){
                if ((-num) >= pow(2, (7 - i))){
                    num = num + (int)(pow(2, (7 - i)));
                    a[i] = 1;
                }
                else
                    a[i] = 0;
            }

            for (int i = 7; i >= 0; i--){
                if (judgment != 0){
                    if (a[i] == 0)
                        a[i] = 1;
                    else
                        a[i] = 0;
                }

                if (a[i] == 0)
                    a[i] = 0;
                else{
                    a[i] = 1;
                    judgment++;
                }
            }
        }

        for (int i = 0; i < 8; i++)
            cout << a[i];
        cout << "" << endl;
        return 0;
    }
}