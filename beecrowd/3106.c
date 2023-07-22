#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int sum = 0, temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        sum += temp / 3;
    }

    printf("%d", sum);

    return 0;
}