#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float dollar;
    dollar = get_float("Enter your ammount in dollar: ");
    int pennies = dollar * 100;

    printf("%.3f dollar is equal to %i pennies.\n",dollar, pennies);
    return 0;
}