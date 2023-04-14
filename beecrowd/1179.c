#include <stdio.h>

int main(void)
{
    int num, par[5], impar[5], j = 0, k = 0;
    for(int i = 0; i < 15; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            par[j] = num;
            j++;

            if (j > 4)
            {
                for(int x = 0; x < 5; x++)
                {
                    printf("par[%d] = %d\n", x, par[x]);
                }
                j = 0;
            }
        }
        else
        {
            impar[k] = num;
            k++;

            if (k > 4)
            {
                for(int x = 0; x < 5; x++)
                {
                    printf("impar[%d] = %d\n", x, impar[x]);
                }
                k = 0;
            }
        }
    }

    for(int x = 0; x < k; x++)
    {
        printf("impar[%d] = %d\n", x, impar[x]);
    }
    for(int x = 0; x < j; x++)
    {
        printf("par[%d] = %d\n", x, par[x]);
    }

    return 0;
}