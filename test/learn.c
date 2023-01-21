#include <stdio.h>

int main() {

    int t, speed;
    double d, fuel;

    scanf("%d %d", &t, &speed);
    d = t * speed;
    fuel = d/12.0;

    printf("%.3lf\n",fuel);
    return 0;
}