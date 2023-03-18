#include<stdio.h>

int main(void)
{
    int x, y, temp, sum = 0;
    scanf("%d %d", &x, &y);

    if(x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    //now x is less than y

    for(int i = x + 1; i < y; i++)
    {
        if((i % 5 == 2) || (i % 5 == 3))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}