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
        }

    }

    return 0;
}