#include <stdio.h>
#include <math.h>
#include <string.h>

int A[10009], B[10009];

int main(void)
{
    int a, b;
    while(1)
    {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) break;

        for(int i = 0; i < 10009; i++)
        {
            A[i] = 0;
            B[i] = 0;
        }

        int temp;
        for(int i = 0; i < a; i++)
        {
            scanf("%d", &temp);
            A[temp] = 1;
        }

        for(int i = 0; i < b; i++)
        {
            scanf("%d", &temp);
            B[temp] = 1;
        }

        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < 10009; i++)
        {
            if(A[i] == B[i])
            {
                A[i] = 0;
                B[i] = 0;
            }
        }

        for(int i = 0; i < 10009; i++)
        {
            sum1 += A[i];
            sum2 += B[i];
        }

        int small = (sum1<sum2)?sum1:sum2;
        printf("%d\n", small);

    }

    return 0;
}