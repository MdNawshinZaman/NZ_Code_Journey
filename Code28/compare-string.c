#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //string s = get_string("s: "); // get_string alway return the first character address of the strign
    //string t = get_string("t: ");

    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (strcmp(s, t) == 0) // 'strcmp() is the function built-in string.h library to compare 2 strings'
    {
        printf("Same\n"); // this part of the code never works when we use only 'string' instead of 'char *'
    }
    else
    {
        printf("Different\n");
    }
}