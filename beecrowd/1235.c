#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d%*c", &n);

    char str[101];
    for(int i = 0; i < n; i++)
    {
        scanf("%[^\n]%*c", str);
        int len = strlen(str);
        str[len] =  '\0';

        int half_len = len / 2;

        int j = half_len - 1;
        while(j >= 0)
        {
            printf("%c", str[j]);
            j--;
        }

        j = len - 1;
        while(j >= half_len)
        {
            printf("%c", str[j]);
            j--;
        }

        printf("\n");

    }

    return 0;
}