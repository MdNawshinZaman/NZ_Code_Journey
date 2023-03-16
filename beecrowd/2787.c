#include<stdio.h>

int main(void)
{
    int line, column;
    scanf("%d %d", &line, &column);

    if(line % 2 == 1)
    {
        if(column % 2 == 1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    else
    {
        if(column % 2 == 1)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }

    return 0;
}