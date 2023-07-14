#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if(x <= 10) printf("0 %d\n", x);
        else printf("%d 10\n", x - 10);
    }

    return 0;
}