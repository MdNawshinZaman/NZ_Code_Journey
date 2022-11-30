//This is a program to convert all input characters to upper case
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <='z')
        {
            printf("%c", s[i]-32); //there is a gap of 32 between the ASCII valuse of an uppercase and a lower case letter.
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

}