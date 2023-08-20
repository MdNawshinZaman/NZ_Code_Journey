#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int A[10009], B[10009];
    for(;;)
    {
        for(int i = 0; i <= 10009; i++)
        {
            A[i] = 0;
            B[i] = 0;
        }

        int a, b;
        scanf("%d %d", &a, &b)

        int temp;
        for(int i = 0; i < a; i++)
        {
            scanf("%d", &temp);
            A[temp]++;
        }

        for(int i = 0; i < b; i++)
        {
            scanf("%d", &temp);
            B[temp]++;
        }

        

    }

    return 0;
}