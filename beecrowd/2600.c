#include <stdio.h>
#include <math.h>


int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int a1, a2, b1, b2, c1, c2;
        scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &b2, &c2, &a2);

        if((a1 >= 1 && a1 <= 6) && (a2 >= 1 && a2 <= 6) && (b1 >= 1 && b1 <= 6) && (b2 >= 1 && b2 <= 6) && (c1 >= 1 && c1 <= 6) && (c2 >= 1 && c2 <= 6))
        {
            if((a1 + a2 == 7) && (b1 + b2 == 7) && (c1 + c2 == 7))
            {
                printf("SIM\n");
            }
            else
            {
                printf("NAO\n");
            }
        }
        else
        {
            printf("NAO\n");
        }

    }

    return 0;
}