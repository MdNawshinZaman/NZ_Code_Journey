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
       /* if(islower(s[i]) != 0)
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        } */

        printf("%c", toupper(s[i])); // this function will do all the works of the mentioned if-else here.
    }
    printf("\n");

}