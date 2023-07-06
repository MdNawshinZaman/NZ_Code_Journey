#include<stdio.h>
#include<math.h>
#define MAX 200000

int main(void)
{
    long arr[MAX] = {1};
    int prime[MAX] = {0};
    int p = 0;

    for(int i = 2; i <= sqrt(MAX); i++)
    {
        if (arr[i] == 1)
        {
            prime[p] = i;
            p++;

            for (int j = i*i; j <= MAX; j+=i)
            {
                arr[j] = 0;
            }
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

    return 0;
}