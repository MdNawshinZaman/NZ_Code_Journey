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

        printf("%d\n", len);

        str[len] =  '\0';

        printf("%lu\n", strlen(str));


    }

    return 0;
}