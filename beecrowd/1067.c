#include<stdio.h>
#include<math.h>

int main(void)
{
    int x;
    scanf("%d",&x);
    float y;

    y = ceil(x /2.0);
    //printf("%f\n", y);

    for(int i = 0, n = 1; i < y ; i++ )
    {
        printf("%d\n", n);
        n = n + 2;
    }

    return 0;
}

// this code taught me the usage of ceil() function... :)