#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");

    for(int i = 0, j = strlen(s); i < j; i++)
    {
        if(islower(s[i]) != 0)
        {
            printf("%c", s[i]-32);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");

    return 0;
}