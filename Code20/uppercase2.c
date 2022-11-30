//This is a program to convert all input characters to upper case (Most Upgraded version)
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(islower(s[i]) != 0)
        {
            printf("%c", /* s[i]-32 */ toupper);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

}