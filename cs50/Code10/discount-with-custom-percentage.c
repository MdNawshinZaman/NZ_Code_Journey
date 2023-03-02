#include<stdio.h>
#include<cs50.h>

float discount (float price, float percentage);
int main(void)
{
    float regular = get_float("Enter the Regular price: ");
    float percent_off = get_float("Enter the discount percentage: ");
    float sale = discount(regular, percent_off);
    printf("Sale price: %.2f$\n",sale);
}

float discount (float price, float percentage)
{
    // return price - (price*(percentage/100)); // this is my logic, now lets see the logic found in video
    return price * (100 - percentage)/100;
}