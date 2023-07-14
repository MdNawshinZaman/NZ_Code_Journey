#include<stdio.h>
unsigned long long int arr[4294967296] = {0};

int main(void)
{
    int x = 0;
    for(unsigned long long int i = 1; i < 4294967296; i+=x)
    {
        arr[i] = 1;
        x++;
    }

    int n;
    scanf("%d", &n);

    unsigned long long int temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &temp);
        printf("%lld", arr[temp]);
    }

    return 0;
}