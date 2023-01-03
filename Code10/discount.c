#include <stdio.h>
#include <cs50.h>


int main (void)
{
    char ch = '%';
    float regular = get_float ("Regular price: you are getting 15% off.\n",ch);
    float sale = regular * .85;
    printf ("Sale price: %.2f", sale);
}