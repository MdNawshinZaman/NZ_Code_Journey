#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string name = get_string("Name: ");

    int i = 0;
    while (name[i] != '\0') // here '\0' refers to Nul character    // "name[i]" is the index of the posision of 'n'th character
    {
        i++;
    }
    printf("%i\n",i);

}