#include <stdio.h>
#include <math.h>


int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n+1][n+1];

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    

    return 0;
}