#include <stdio.h>
#include <string.h>

int main(void)
{
    while (1)
    {
        fflush(stdin);
        char n, str[107];
        scanf("%c %s", &n, str);
        if((n == '0') && (strcmp(str, "0") == 0)) break;

        int len = strlen(str);

        //printf("Lenght %d\n", len);
        for(int i = 0; i < len; i++)
        {
            if (str[i] == n)
            {
                str[i] = 'x';
            }
        }

        //printf("%s\n", str);

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

        //printf("%s\n", final);

        int flag = 1;
        for(int p = 0; p < strlen(final); p++)
        {
            if(final[p] != '0')
            {
                flag = 0;
                break;
            }
        }

        int FLAG = 0;
        if(flag == 1)
        {
            printf("0\n");
        }
        else
        {
            for(int i = 0; i < strlen(final); i++)
            {
                if((FLAG == 0) && (final[i] != '0')) FLAG = 1;
                if(FLAG = 1)
                {
                    printf("%c", final[i]);
                }
            }
        }

    }

    return 0;
}
