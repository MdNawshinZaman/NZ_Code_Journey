#include<stdio.h>

int main(void)
{
    int r = 4
    for (int i = 0; i < r; i++)
    {
        for (j = 0; j > i+r; j--)
        {
            printf("#");
        }

        printf("\n");
    }
}