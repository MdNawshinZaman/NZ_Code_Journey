#include <stdio.h>
#include <string.h>

int main(void)
{
    while (1)
    {
        int n;
        scanf("%d", &n);

        getchar();
        char str[107];
        scanf("%s", str);

        if((n == 0) && (str[0] == '0')) break;

        int i = 0;
        while(str[i] != '\0')
        {
            if(str[i] == (n + 48))
            {
                str[i] = -1;
            }
            i++;
        }

        char f_str[107] = {0};
        i = 0;
        int f = 0;
        while(str[i] != '\0')
        {
            if(str[i] > 0)
            {
                f_str[f] = str[i];
                f++;
            }
            i++;
        }
        f_str[f] = '\0';

        i = 0;
        int flag = 0;
        while (f_str[i] != '\0')
        {
            if (f_str[i] != '0')
            {
                flag = 1;
                break;
            }
        }

        if(flag != 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%s\n", f_str);
        }
    }

    return 0;
}