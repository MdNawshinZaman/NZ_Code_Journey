#include <cs50.h>
#include <ctype.h> // included to use 'toupper'
#include <stdio.h>
#include <string.h>

int main(void)
{
     string s = get_string("s: ");

     string t = s;

     t[0] = toupper(t[0]);

     printf("s: %s\n",s);
     printf("t: %s\n",t);
}
/* in the output we get both s and t doing the same job, because
 by writing the line
 string t = s;
 we made two variables that are pointing to a same address.
 So, when we apply any rule to one variable, the*/