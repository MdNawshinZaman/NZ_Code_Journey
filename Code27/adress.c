//#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //string s ="HI!";
    char *s ="HI!"; // this line is the same as the previous line

    /* printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[3]);  */

    printf("%c\n", *s); // here only s is the address of the first character of the string. // by adding * I am telling my code to go there where the address indicates.
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2)); // Here adding the 1, 2 with *s is called pointer arithmetics.
}