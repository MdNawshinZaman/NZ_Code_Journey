//incomplete
#include <stdio.h>

int main(void)
{
    int rx, ry, n;
    scanf("%d", &n);

    int x[5], y[5];
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d %d", &x[j], &y[j]);
        }

        scanf("%d %d", &rx, &ry);

        int temp;
        for(int j = 0; j < 4; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                if (x[k] > x[k+1])
                {
                    temp = x[k];
                    x[k] = x[k+1];
                    x[k+1] = temp;
                }
                if (y[k] > y[k+1])
                {
                    temp = y[k];
                    y[k] = y[k+1];
                    y[k+1] = temp;
                }
            }
        }

        // printf("x: %d %d\ny: %d %d\n",  x[0], x[3], y[0], y[3]);

        if ((rx >= x[0] && rx  <= x[3]) && (ry >= y[0] && ry  <= y[3]))
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}