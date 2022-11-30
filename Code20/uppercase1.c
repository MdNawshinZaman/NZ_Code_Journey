//This is a program to convert all input characters to upper case (Upgraded version)
#include <cs50.h>
#include <ctype.h> // this is the new header file
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(islower(s[i]) != 0) // here used a new function called "islower()"  // PsudoCode: if the character is a small letter, then substract 32
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

// there is a much better way to Convert. seeing it in "uppercase2.c"