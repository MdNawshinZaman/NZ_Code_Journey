#include <stdio.h>

int main(void)
{
    int rx, ry, n;
    scanf("%d", &n);

    int x[5], y[5];
    for (int i = 0; i < n; i++)
    {
        for(int i = 0; i < 4; i++)
        {
            scanf("%d %d", &x[i], &y[i]);
        }

        scanf("%d %d", &rx, &ry);


        // if ((rx >= minX && rx  <= maxX) && (ry >= minY && ry  <= maxY))
        // {
        //     printf("1\n");
        // }
        // else
        // {
        //     printf("0\n");
        // }
    }

    return 0;
}