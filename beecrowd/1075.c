#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    int i = 1;
    while(i < 10000)
    {
        if(i % n == 2)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}