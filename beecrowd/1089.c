#include<stdio.h>

int main(void)
{
    int n;
    while(scanf("%d", &n) != 0)
    {
        int peaks, in[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &in[i]);
        }
        //I have value in 0 to n-1 index.

        int copy[n+2];
        copy[0] = in[n-1];
        copy[n+1] = in[0];

        for(int i = 1, j = 0; i <= n; i++, j++)
        {
            copy[i] = in[j];
        }

        for(int i = 0; i < n+2; i++)
        {
            printf("%d ", copy[i]);
        }
        printf("\n");



    }

    return 0;
}