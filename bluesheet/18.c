#include<stdio.h>
unsigned long arr[4294967299] = {0};

int main(void)
{
    int x = 0;
    for(unsigned long i = 1; i < 4294967296; i+=x)
    {
        arr[i] = 1;
        x++;
    }

    int n;
    scanf("%d", &n);

    unsigned long temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%lu", &temp);
        printf("%lu", arr[temp]);
    }

    return 0;
}