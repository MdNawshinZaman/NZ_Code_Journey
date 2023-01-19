#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float dollar;
    dollar = get_float("Enter your ammount in dollar: ");
    int pennies = round(dollar * 100); //here without the round() fuction, my code was probably saving of 4.19999..... refer to 4.20
                                       // As a result, this code can't convert 4.20$ to pennies without the round() function!!!

    printf("%.2f dollar is equal to %i pennies.\n",dollar, pennies);
    return 0;
}