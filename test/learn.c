#include <cs50.h>
#include <stdio.h>

//writing a program to give 15% discount to my customer
float discount(float price);
int main(void)
{
   float regular = get_float(" You will get 15 percent off! \n Plese enter your regular price: ");
   float sale = discount(regular);
   printf("Your disvounted price is: %.2f\n", sale);
   return 0;
}

float discount(float price)
{
    return price * (100-15)/100;
}