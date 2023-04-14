#include <stdio.h>

int main(void)
{
    int t, n;
    sacnf("%d", &t);

    for (int z = 0; z < t; z++)
    {
        scanf("%d", &n);
        int sheep[n];

        for(int i = 0; i < n; i++)
        {
            sacnf("%d", &sheep[i]);
        }

        int temp;
        for(int i = 0; i < n; i++)
        {
            for(int i = 0, m = n - 1; i < m; i++)
            {
                if (sheep[i] > sheep[i + 1])
                {
                    temp = sheep[i];
                    sheep[i] = sheep[i + 1];
                    sheep[i + 1] = temp;
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


    }

    return 0;
}