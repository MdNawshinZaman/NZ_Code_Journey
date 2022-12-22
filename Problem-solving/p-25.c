#include<stdio.h>

int main(void)
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%i",&r);

    for (int i = 0; i < r; i++)
    {
        for (int j = r; j > i; j--)
        {
            printf("#");
        }

        printf("\n");
    }
}