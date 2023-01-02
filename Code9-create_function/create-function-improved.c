#include<stdio.h>

void meow (int n)
{
    for (int i = 0; i > n; i--)
    {
        printf("Meowww. \n");
    }
}

int main(void)
{
    meow(10);
}