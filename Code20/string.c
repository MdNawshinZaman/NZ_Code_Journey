#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("Input:  ");
    // Now objective is to print the collected string without using %s
    printf("Output: ");

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
}