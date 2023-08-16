#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[22], str2[22];
    scanf("%s %s", str1, str2);

    if(strcmp(str1, str2) <= 0)
    {
        printf("%s\n%s\n", str1, str2);
    }
    else
    {
        printf("%s\n%s\n", str2, str1);
    }

    return 0;
}
