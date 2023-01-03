#include <stdio.h>
#include <cs50.h>


/*
// this is the main program
int main (void)
{
    char ch = '%';
    float regular = get_float ("Regular price: you are getting 15%c off.\nEnter your Price: ",ch); // here %c is formate spacifier for char value
    float sale = regular * .85;
    printf ("Sale price: %.2f\n", sale);
}*/

int main(void)
{
    char pr = '%';
    float regular = get_float("Regular price: You are getting 15%c off.\nEnter the ammount: ");
    float sale = discount (regular);
    printf("Sale price: %.2f", sale);
}

float discount (float price)
{
    
}