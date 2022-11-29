#include <stdio.h>
#include <cs50.h>
//doing the same work, but now I am going to create a separate function for the while loop work
int string_length (string s);
int main (void)
{
    string name = get_string("Name: ");
    int length = string_length (name);
    printf("%i\n",length);
}

int string_length (string s)
{
    int i = 0;
    while (s[i] != '\0') // '\0' for Nul
    {
        i++;
    }
    return i;
}