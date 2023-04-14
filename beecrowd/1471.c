#include <stdio.h>

int main(void)
{
    int n, r;
    while (scanf("%d %d", &n, &r) != EOF)
    {
        int volunteers[r];

        for (int i = 0; i < r; i++)
        {
            scanf("%d", &volunteers[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            int match = 0;
            for (int j = 0; j < r; j++)
            {
                if(i == volunteers[j])
                {
                    match = 1;
                    break;
                }
            }
            if (match == 0)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}