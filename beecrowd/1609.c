#include <stdio.h>

int main(void)
{
    #define int unsigned long long
    int t, n;
    scanf("%llu", &t);

    for (int z = 0; z < t; z++)
    {
        scanf("%llu", &n);
        int sheep[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%llu", &sheep[i]);
        }

        int temp;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0, m = n - 1; j < m; j++)
            {
                if (sheep[j] > sheep[j + 1])
                {
                    temp = sheep[j];
                    sheep[j] = sheep[j + 1];
                    sheep[j + 1] = temp;
                }
            }
        }

        int unique = sheep[0], count = 1;
        for(int i = 1; i < n; i++)
        {
            if (unique != sheep[i])
            {
                count++;
                unique = sheep[i];
            }
        }

        printf("%llu\n", count);

    }

    return 0;
}