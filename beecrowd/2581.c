#include <stdio.h>

int main(void)
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        char q[100];
        for (int i = 0; i < n; i++)
        {
            scanf("%[^\n]",q);
            printf("I am Toorg!\n");
        }
    }

    return 0;
}