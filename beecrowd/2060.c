#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count, z = 2;
    for(int i = 2; i <= 5; i++)
    {
        count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] % i == 0)
            {
                count++;
            }
        }
        printf("%d Multiplo(s) de %d\n", count, z);
        z++;
    }

    return 0;
}