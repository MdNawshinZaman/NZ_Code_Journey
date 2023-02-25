#include<stdio.h>

int main(void)
{
    int n, num = 0;
    scanf("%d", &n);
    int hit[n];


    while(num < n)
    {
        scanf("%d", &hit[num]);
        num++;
    }
    

    return 0;
}