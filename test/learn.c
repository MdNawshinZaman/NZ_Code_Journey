#include <cs50.h>
#include <stdio.h>

//writing a program to give 15% discount to my customer

int main(void)
{
    char pr = '%';
    float regular = get_float("Welcome to the shop!\nYou will get 15%c off.\nPlease enter your price: ",pr);
    float sale = regular*((100-15)/100);
    printf("Sale price: %.2f\n",sale);
    return 0;
}