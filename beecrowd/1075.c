#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    int i = n;
    while(i < 1000)
    {
        if(i % n == 2)
        {
            printf("%d", i)
        }
    }

    return 0;
}