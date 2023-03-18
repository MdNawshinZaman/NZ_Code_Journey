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

    


    return 0;
}