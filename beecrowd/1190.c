#include <stdio.h>

int main(void)
{
    float M[12][12], sum = 0;
    char c;
    scanf(" %c",&c);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 12 - i; j <= 11 ; j++)
        {
            sum += M[i][j];
        }

    }

    for (int i = 6; i <= 10; i++)
    {
        for (int j = i + 1 ; j <= 11 ; j++)
        {
            sum += M[i][j];
        }

    }



    return 0;
}