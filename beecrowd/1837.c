#include<stdio.h>

int main(void)
{
    int a, b, r, q;
    scanf("%d %d", &a, &b);//-7 3

    r = a % b;//(-3)
    q = a / b;//(2)

    printf("%d %d\n", q, r);

    return 0;
}