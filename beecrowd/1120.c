#include <stdio.h>
#include <string.h>

int main(void)
{
    char n, str[107];
    while (1)
    {

        scanf(" %c %s", &n, str);
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
            for(int k = 0; k < strlen(final); k++)
            {
                if((FLAG == 0) && (final[k] != '0')) FLAG = 1;
                if(FLAG == 1)
                {
                    printf("%c", final[k]);
                }
            }
            printf("\n");
        }

    }

    return 0;
}
