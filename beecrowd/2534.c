#include <stdio.h>

int main(void)
{
    int n, q;
    while(scanf("%d %d", &n, &q) != EOF)
    {
        int grade[n], position[q];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &grade[i]);
        }

        int temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0, m = n - 1 ; j < m; j++)
            {
                if (grade[j] < grade[j + 1])
                {
                    temp = grade[j];
                    grade[j] = grade[j + 1];
                    grade[j + 1] = temp;
                }
            }
        }

        for(int i = 0; i < q; i++)
        {
            scanf("%d", &position[i]);
        }

        for(int i = 0; i < q; i++)
        {
            printf("%d\n",grade[position[i] - 1]);
        }
    }

    return 0;
}