#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 200000

int main(void)
{
    int arr[MAX] = {0};
    int prime[20000] = {0};
    int p = 0;

    for(int i = 2; i <= sqrt(MAX); i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i*i; j <= MAX; j+=i)
            {
                arr[j] = 1;
            }
        }
    }

    for(int i = 2, j = 0; i <= MAX; i++)
    {
        if(arr[i] == 0)
        {
            prime[j] = i;
            j++;
        }
    }

    int n;
    scanf("%d", &n);

    int temp;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        printf("%d\n", prime[temp - 1]);
    }

    //printf("\n%d\n", prime[600]);

    return 0;
}