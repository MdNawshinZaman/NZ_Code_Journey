#include <stdio.h>

int main(void)
{
    int t, n, temp;
    char team[13];
    while(1)
    {
        scanf("%d %d", &t, &n);
        if(t == 0) break;

        int sum = 0;
        for(int i = 0; i < t; i++)
        {
            scanf(" %s %d", team, &temp);
            sum += temp % 3;
        }

        printf("%d\n", sum / 2);

    }

    return 0;
}