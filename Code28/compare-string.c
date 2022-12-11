#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //string s = get_string("s: "); // get_string alway return the first character address of the strign
    //string t = get_string("t: ");

    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (s == t)
    {
        printf("Same\n"); // this par of the code never works when we use only 'string' instead of 'char *'
    }
    else
    {
        printf("Different\n");
    }
}