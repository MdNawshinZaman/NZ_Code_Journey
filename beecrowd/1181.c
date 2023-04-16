#include <stdio.h>

int main(void)
{
    float M[12][12];
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }

    return 0;
}