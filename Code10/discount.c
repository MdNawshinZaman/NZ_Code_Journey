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
float discount (float price);
int main(void)
{
    char pr = '%';
    float regular = get_float("Regular price: You are getting 15%c off.\nEnter the ammount: ",pr);
    float sale = discount (regular);
    printf("Sale price: %.2f\n", sale);
}

/*float discount (float price)
{
    float sale = .85 * price;
    return sale; // here "return" is used for getting the value from the function  named "discount"
}*/

//this is the first method to make my own function and get value from it.
//But there is an another and more effective way to do this.
// Doing that below.

float discount (float price)
{
    return .85 * price;
}
