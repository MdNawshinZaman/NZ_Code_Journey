#include <stdio.h>
#include <string.h>


int main(void)
{
    char str[1107];
    while(1)
    {
        scanf("%[^\n]%*c", str);
        int len  = strlen(str);
        str[len] = '\0';

        if(strcmp(str, "*") == 0) break;

        char ch = str[0];

        int i = 0;

        while(str[i] != '\0')
        {
            
        }

    }

    return 0;
}