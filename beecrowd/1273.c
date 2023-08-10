#include<stdio.h>
#include<string.h>

int main(void)
{
    int n, z = 0;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;
        if(z > 0) printf("\n");
        else z++;

        int big = 0;
        char s_str[50][51];
        for(int i = 0; i < n; i++)
        {
            fflush(stdin);
            scanf("%s", s_str[i]);

            int m = strlen(s_str[i]);
            if(m > big)
            {
                big = m;
            }
        }

        for(int i = 0; i < n; i++)
        {
            int x = strlen(s_str[i]);

            for(int j = 0; j < (big - x); j++)
            {
                printf(" ");
            }
            printf("%s\n", s_str[i]);
        }
    }

    return 0;
}
