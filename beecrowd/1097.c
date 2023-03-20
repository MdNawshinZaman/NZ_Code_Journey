#include<stdio.h>

int mani(void)
{
    for(int i = 1; i <= 9; i++)
    {
        int k = 7;
        for(int j = k; j >= k-2; j--)
        {
            printf("I=%d J=%d\n", i, k);
        }

        k += 2;

    }

    return 0;
}