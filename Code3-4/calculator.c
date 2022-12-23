#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // Commenting is used to design the code in a more readable way!!
    // prompt user for x
    int x = get_int("x: ");

    // prompt user for y
    int y = get_int("y: ");

    // perform addition
    int z = x + y;
    printf("%i\n",z);
}