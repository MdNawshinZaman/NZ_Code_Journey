#include <stdio.h>
#include <math.h>


int main(void)
{
    int n;
    scanf("%d",&n);

    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int freq[1009];
    for(int i = 0; i <= 1009; i++)
    {
        freq[i] = 0;
    }

    for(int i = 0; i < (n*2); i++)
    {
        int y, z;
        scanf("%d %d", &y, &z);
        freq[arr[y-1][z-1]] = 1;
    }

    int species = 0;
    for(int i = 0; i <= 1009; i++)
    {
        species += freq[i];
    }

    printf("%d\n", species);
    return 0;
}