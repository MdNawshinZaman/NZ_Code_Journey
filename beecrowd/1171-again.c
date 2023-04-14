#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int num[n], temp;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0, m = n - 1; j < m; j++)
        {
            if(num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    /*for(int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");*/

    int digit = num[0], count = 1;

    for(int i = 1; i <= n; i++)
    {
        if (digit == num[i])
        {
            count++;
        }
        else if (digit < num[i])
        {
            printf("%d aparece %d vez(es)\n", digit, count);
            digit = num[i];
            count = 1;
        }
    }
    return 0;
}