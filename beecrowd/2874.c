#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    while (scanf("%d%*c", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            char str[9];
            scanf("%s%*c", str);
            printf("%c", (char)strtoll(str, NULL, 2));
        }
        printf("\n");
    }

    return 0;
}
