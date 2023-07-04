#include<stdio.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("i is: %d\n", i);
}

int get_negative_int(void)
{
    int n;
    do
    {
        printf("Negative integer: ");
        scanf("%d", &n);
    }
    while(n >= 0);
    return n;
}