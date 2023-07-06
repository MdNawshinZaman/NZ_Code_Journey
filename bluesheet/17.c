#include<stdio.h>
#include<math.h>
#define MAX 200000

int main(void)
{
    int arr[200000] = {1};
    int prime[200000] = {0};
    int p = 0;

    printf("\n%d\n", arr[2]);

    for(int i = 2; i <= sqrt(200000); i++)
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

    /*int n;
    scanf("%d", &n);

    int temp;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        printf("%d\n", prime[temp - 1]);
    }*/

    printf("\n%d\n", prime[0]);

    return 0;
}