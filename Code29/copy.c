#include <cs50.h>
#include <ctype.h> // included to use 'toupper'
#include <stdio.h>
#include <string.h>

int main(void)
{
     string s = get_string("s: ");

     string t = s;

     t[0] = toupper(t[0]);

     printf("s: %s",s);
     printf("t: %s",t);
}