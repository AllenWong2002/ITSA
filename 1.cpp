#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(){
    FILE *fp;
    for (int i = 1; i <= 40; i++){
        char a[20] = "ITSA_";
        char b[5] = {0};
        char c[] = ".cpp";
        sprintf(b, "%d", i);
        strcat(a, b);
        strcat(a, c);
        fp = fopen(a, "w");
        fclose(fp);
    }
}