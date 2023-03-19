#include<stdio.h>

int main(void)
{
    int m, n, temp, sum;
    while(1)
    {
        scanf("%d %d", &m, &n);
        if((m <= 0) || (n <= 0)){break;}

        if(m > n)
        {
            temp = m;
            m = n;
            n = temp;
        }// now m is less than n

        sum = 0;
        for(int i = m; i <= n; i++)
        {
            printf("%d ", i);
            sum += i;
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}