#include <stdio.h>

int main(void)
{
    double old, new;
    scanf("%lf %lf", &old, &new);

    double increase = new - old;
    double percent = (increase/old)*100.0;

    printf("%.2lf", percent);
    printf("\n");


    return 0;
}