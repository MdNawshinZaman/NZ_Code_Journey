#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // Commenting is used to design the code in a more readable way!!
    // prompt user for x
    long x = get_long("x: ");

    // prompt user for y
    long y = get_long("y: ");

    // perform addition
    //long z = x + y;
    //printf("%i\n",z);
    printf("%li\n", x+y);
}