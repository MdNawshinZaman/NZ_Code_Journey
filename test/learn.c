#include <stdio.h>

int main() {

    int X;
    float Y, avgcon;
    scanf("%d %f", &X, &Y);
    avgcon = X/Y;
    printf("%.3f km/l\n", avgcon);

    return 0;
}