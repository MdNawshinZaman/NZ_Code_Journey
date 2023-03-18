#include<stdio.h>

int main(void)
{
    int n;
    while((scanf("%d", &n)) != 0)
    {

        //if(n == 0)break;

        int in[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &in[i]);
        }
        //I have value in 0 to n-1 index.
        int m = n + 2;
        int copy[m];
        copy[0] = in[n-1];
        copy[m-1] = in[0];

        for(int i = 1, j = 0; i <= n; i++, j++)
        {
            copy[i] = in[j];
        }

        /*for(int i = 0; i < m; i++)
        {
            printf("%d ", copy[i]);
        }
        printf("\n");*/

        int peaks = 0;

        for(int i = 1; i < m-1; i++)
        {
            if(((copy[i] < copy[i-1]) && (copy[i] < copy[i+1])) || ((copy[i] > copy[i-1]) && (copy[i] > copy[i+1])))
            {
                peaks++;
            }
        }

        printf("%d\n", peaks);

    }

    return 0;
}