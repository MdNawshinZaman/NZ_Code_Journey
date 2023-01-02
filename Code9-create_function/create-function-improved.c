#include<stdio.h>

void meow (int n)
{
    for (int i = n; i > 0; i--)
    {
        printf("Meowww. \n");
    }
}

int main(void)
{
    meow(3);
}

