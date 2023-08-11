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

        char f_str[107];
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

        

    }

    return 0;
}