#include<stdio.h>

int main(void)
{
    int s[3];
    s[0] = 72;
    s[1] = 73;
    s[2] = 33;



    printf("Avgerage: %.4lf\n", (s[0] + s[1] + s[2]) / (float)3);

    return 0;

}