#include <stdio.h>

int main(void)
{
    int n;
    while(scanf("%d", &n) != EOF) // 9
    {
        int space = n / 2; // 4
        int times = (n / 2) + 1; // 5
        int sspace = space;

        for(int i = 0; i < times; i++)
        {
            for(int j = 0; j < space; j++)
            {
                printf(" ");
            }

            for(int j = 0, x = times - space; j < x+i; j++)
            {
                printf("*");
            }
            printf("\n");
            space--;//3
        }

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < sspace; j++)
            {
                printf(" ");
            }
            for(int j = 0, x = times - sspace; j < x+i; j++)
            {
                printf("*");
            }
            printf("\n");
            sspace--;
        }
        printf("\n");
    }

    return 0;
}