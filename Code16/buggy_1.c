#include <stdio.h>
#include <cs50.h>

int get_negative_int (void);

int main (void)
{
    int i = get_negative_int();
    printf("%i\n",i);
}

int get_negative_int (void) // here get_negative_int is a fuction which will return an int value but won't take any.
{
    int n;
    do
    {
        n = get_int("Please input a negative integer: ");
        printf("n is %i\n",n);
    }
    while (n < 0);
    return n;
}