#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string name = get_string("Name: ");

    int i = 0;
    while (name[i] != '\0') // here '\0' refers to Nul character
    {
        i++;
    }
    printf("%i\n",i);

}