#include <stdio.h>

int main(void)
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        char ch[100];
        for (int i = 0; i < n; i++)
        {
            getchar();
            fgets(ch, 100, stdin);
            printf("I am Toorg!\n");
        }
    }

    return 0;
}