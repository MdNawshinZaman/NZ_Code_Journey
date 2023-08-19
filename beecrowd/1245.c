#include <math.h>
#include <stdio.h>

int main(void)
{
    while (1)
    {
        int n;
        scanf("%d%*c", &n);

        int D[61], E[61];

        for(int i = 0; i < 62; i++)
        {
            D[i] = 0;
            E[i] = 0;
        }

        for(int i = 0; i < n; i++)
        {
            int m;
            char l;
            scanf("%d%*c%c%*c", &m, &l);

            if(l == 'D') D[m]++;
            else if(l == 'E') E[m]++;
        }

        int pair = 0;

        for(int i = 0; i <= 61; i++)
        {
            if((D[i] > 0) && (E[i] > 0))
            {
                int small = (D[i] < E[i])? D[i] : E[i];
                pair += small;
            }
        }

        printf("%d\n", pair);
    }

    return 0;
}