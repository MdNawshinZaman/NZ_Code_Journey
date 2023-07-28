#include<stdio.h>

int main(void)
{
    int n;
    float z = 123.456;
    n = z;

    printf("%d", n);
    printf("%f", z - n);

    return 0;
}