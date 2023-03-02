#include <stdio.h>

int main(void)
{
    // string s = "HI!"; // this line is working as char *s = "HI!";
    char *s = "HI!";
    char *p = &s[0];

    printf ("%p\n", s); // %p is telling the computer to print the address of the first character of "HI!"
    printf("%p\n", p);
}