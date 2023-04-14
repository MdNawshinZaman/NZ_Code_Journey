#include <stdio.h>

int main(void)
{
    int t, n;
    scanf("%d", &t);

    for (int z = 0; z < t; z++)
    {
        scanf("%d", &n);
        int sheep[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &sheep[i]);
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

        printf("%d\n", count);

    }

    return 0;
}