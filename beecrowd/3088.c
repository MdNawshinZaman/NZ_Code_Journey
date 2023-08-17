#include <stdio.h>
#include <string.h>
#define max 100007

int main(void)
{
    char str[max];
    char final[max];

    while (scanf("%[^\n]s", str) != NULL)
    {
        int len = strlen(str);
        str[len] = '\0';

        // printf("%s\n", str);

        int i = 0;
        while (str[i] != '\0')
        {
            if ((str[i] == ' ') && ((str[i + 1] == ',') || (str[i + 1] == '.')))
                str[i] = -1;
            i++;
        }

        i = 0;
        int j = 0;
        while (str[i] != '\0')
        {
            if (str[i] != -1)
            {
                final[j] = str[i];
                j++;
            }
            i++;
        }
        final[j] = '\0';

        printf("%s\n", final);
    }
    return 0;
}