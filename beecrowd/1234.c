#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[51];

    while(scanf("%[^\n]%*c", str) != EOF)
    {
        int len = strlen(str);
        str[len] = '\0';

        int i = 0, flag = 1;
        while(str[i] != '\0')
        {
            if(((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')))
            {
                if(flag == 1)
                {
                    if ((str[i] >= 'A') && (str[i] <= 'Z'))
                    {
                        printf("%c", str[i]);
                        flag = 0;
                    }
                    else
                    {
                        printf("%c", str[i] - 32);
                        flag = 0;
                    }
                }
                else if(flag == 0)
                {
                    if ((str[i] >= 'a') && (str[i] <= 'z'))
                    {
                        printf("%c", str[i]);
                        flag = 1;
                    }
                    else
                    {
                        printf("%c", str[i] + 32);
                        flag = 1;
                    }
                }
            }
            else
            {
                printf("%c", str[i]);
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}