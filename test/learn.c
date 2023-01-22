#include <stdio.h>

int main() {

    int days, y, m, d;
    scanf("%d", &days);

    y = days/365;
    days = days - (y*365);
    m = days/30;
    days = days-(m*30);
    d = days;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);

    return 0;
}