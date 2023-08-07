#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[28];
    while(scanf("%s", str) != EOF)
    {
        int n, temp;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &temp);
            printf("%c", str[temp-1]);
        }
        printf("\n");
    }

    return 0;
}