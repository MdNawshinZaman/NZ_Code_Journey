#include <stdio.h>
#include <cs50.h>

int main (void)
{
   string s = "HI!\n"; //string is implemented as an array of charecters
   //printf("%s", s);

    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); // here s[0] refers to index 0 ehich is H, same with s[1] and s[2] that refers to I and !
                                                    // buy using the s[3], we are aqtually seing the Nul Character

}