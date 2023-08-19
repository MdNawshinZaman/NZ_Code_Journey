#include <math.h>
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int arr[6];
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &arr[j]);
        }
        int a1, a2, b1, b2, c1, c2;
        a1 = arr[0];
        b1 = arr[1];
        c1 = arr[2];
        b2 = arr[3];
        c2 = arr[4];
        a2 = arr[5];

        for (int j = 0; j < 6; j++)
        {
            int temp;
            for (int k = 0; k < 5; k++)
            {
                if (arr[k] > arr[k + 1])
                {
                    temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
            }
        }

        int unique = 1;
        for (int j = 0; j < 6; j++)
        {
            if (arr[j] != j + 1)
            {
                unique = 0;
                break;
            }
        }

        if (unique)
        {
            if ((a1 + a2 == 7) && (b1 + b2 == 7) && (c1 + c2 == 7))
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