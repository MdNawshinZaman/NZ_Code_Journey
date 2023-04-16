#include <stdio.h>

int main(void)
{
    float M[12][12], sum = 0;
    int l;
    char t;
    scanf("%d %c", &l, &t);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++)
    {
        sum += M[i][l];
    }

    switch(t)
    {
        case 'S':
        printf("%.1f\n", sum);
        break;

        case 'M':
        printf("%.1f\n", sum / 12);
        break;
    }

    return 0;
}