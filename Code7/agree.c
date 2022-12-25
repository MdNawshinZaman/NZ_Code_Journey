#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // promt use to agree
    char c = get_char("Do you agree? ");

    // check weather user agreed
    // if you are dealing with single characters also known as 'char', you will have to use single quotes ('') instead of Double Quotes ("")
    start:
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not Agreed.\n");
    }
    else
    {
        goto start;
    }
}