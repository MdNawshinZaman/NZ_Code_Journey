#include<stdio.h>

int main(void)
{
    int x, y, temp;
    scanf("%d %d", &x, &y);

    if(x > y)
    {
        temp = x;
        x = y;
        y =temp;
    }// now x is less than y

    int i = x, sum = 0;
    while(i <= y)
    {
        if(i % 13 != 0)
        {
            sum += i;
        }
        i++;
    }

    printf("%d\n", sum);

    return 0;
}