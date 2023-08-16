#include <stdio.h>
#include <string.h>

int main(void)
{
    while (1)
    {
        fflush(stdin);
        char n;
        scanf("%c", &n);

        fflush(stdin);
        char str[107];
        scanf("%s", str);

        if((n == '0') && (strcmp(str, "0") == 0)) break;

        int len = strlen(str);
        for(int i = 0; i < len; i++)
        {
            if (str[i] == n)
            {
                str[i] = 'x';
            }
        }

        char final[107];
        int i = 0, j = 0;
        while(i < len)
        {
            if(str[j] != 'x')
            {
                final[i] = str[j];
                i++;
            }
            j++;
        }
        final[i] = '\0';

        int flag = 1;
        for(int p = 0; p < strlen(final); p++)
        {
            if(final[p] != '0')
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%s\n",final);
        }

    }

    return 0;
}