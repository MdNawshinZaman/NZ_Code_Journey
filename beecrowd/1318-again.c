#include <stdio.h>

int main(void)
{
    while(1)
    {
        int n , m, ind_count = 0, count = 0;
        scanf("%d %d", &n, &m);
        int ticket[m];

        if (n == 0 && m == 0){break;}

        for(int i = 0; i < m; i++)
        {
            scanf("%d", &ticket[i]);
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if (i == ticket[j]){ind_count++;}
            }
            //printf("%d ", ind_count);

            count += ind_count > 1? 1 : 0;

            //printf(" %d ", count);
            //printf("\n");

            ind_count = 0;
        }

        printf("%d\n", count);
    }

    return 0;
}