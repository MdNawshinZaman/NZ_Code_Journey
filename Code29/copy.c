#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
     string s = get-string("s: ");

     string t = s;

     t[0] = toupper(t[0]);

     printf("s: %s",s);
     printf("t: %s",t);
}