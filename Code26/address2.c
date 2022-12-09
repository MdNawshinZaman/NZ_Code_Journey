#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!"; // this line is working as char *s = "HI!";
    char *p = &s[0];

    printf ("%p\n", s);
    printf("%p\n", p);
}