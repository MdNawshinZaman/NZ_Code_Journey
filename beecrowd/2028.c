#include <stdio.h>
#include <math.h>
#include <string.h>


int main(void)
{
    int n, Case = 1;
    // int ini = 0;
    while(scanf("%d", &n) != EOF)
    {
        // if(ini == 1) printf("\n");
        // else ini = 1;

        int num;
        num = (n * (n + 1)) / 2;
        num++;

        if(num == 1)
        {
            printf("Caso %d: %d numero\n0 ", Case, num);
        }
        else
        {
            printf("Caso %d: %d numeros\n0 ", Case, num);
        }

        Case++;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                printf("%d", i);
                if(j != i-1 ) printf(" ");
            }
            
        }
        printf("\n\n");

    }

    return 0;
}