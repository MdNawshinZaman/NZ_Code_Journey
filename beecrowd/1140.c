#include <stdio.h>
#include <string.h>


int main(void)
{
    char str[1107];
    while(1)
    {
        for(int x = 0; x <= 1107; x++)
        {
            str[x] = '\0';
        }

        scanf("%[^\n]%*c", str);
        int len  = strlen(str);
        str[len] = '\0';

        if(strcmp(str, "*") == 0) break;

        char ch = str[0];

        int i = 0, flag = 1;

        while(str[i] != '\0')
        {
            if(ch != str[i])
            {
                flag = 0;
                break;
            }
            while(str[i] != ' ')
            {
                i++;
                if(str[i] == '\0')
                {
                    break;
                }
            }
            i++;
        }

        if(flag == 1) printf("Y\n");
        else printf("N\n");

    }

    return 0;
}