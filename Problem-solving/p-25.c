#include<stdio.h>

int main(void)
{
    int r = 4;
    for (int i = 0; i < r; i++)
    {
        for (int j = r; j < i; j--)
        {
            printf("#");
        }

        printf("\n");
    }
}