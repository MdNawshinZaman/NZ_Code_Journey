#include<stdio.h>

void meow (int n)
{
    for (int i = n; i > n; i--)
    {
        printf("Meowww. \n");
    }
}

int main(void)
{
    meow(10);
}