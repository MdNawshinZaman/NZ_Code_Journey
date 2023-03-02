#include<stdio.h>

void meow (int n)
{
    for (int i = n; i > 0; i--)
    {
        printf("Meowww. \n");
    }
}

void hi(int h);

int main(void)
{
    hi(2);
    meow(3);
}

void hi(int h)
{
    int a = 0;
    while (a < h)
    {
        printf("Hi.\n");
        a++;
    }
}