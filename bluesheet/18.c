#include<stdio.h>
int arr[10000000009] = {0};

int main(void)
{
    int x = 0;
    for(long i = 1; i < 10000000009; i+=x)
    {
        arr[i] = 1;
        x++;
    }

    int n;
    scanf("%d", &n);

    int temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        printf("%d", arr[temp]);
    }
    
    return 0;
}