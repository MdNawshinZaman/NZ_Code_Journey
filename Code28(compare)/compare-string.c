#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //string s = get_string("s: "); // get_string alway return the first character address of the strign
    //string t = get_string("t: ");

    char *s = get_string("s: ");
    char *t = get_string("t: ");

    //printing those inputs
    printf("%s\n", s); // here %s knows that, it has to start printing from the first character (addressed by char *) and do the rest until it finds the NUL(\0) character
    printf("%s\n", t);

    //printing the addresses of those inputs
    printf("%p\n", s);
    printf("%p\n", t);

    if (strcmp(s, t) == 0) // 'strcmp() is the function built-in string.h library to compare two strings
    {
        printf("Same\n"); // this part of the code never works when we use only 'string' instead of 'char *'
    }
    else
    {
        printf("Different\n");
    }
}