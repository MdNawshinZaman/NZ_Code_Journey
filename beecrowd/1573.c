#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    while(1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0) break;

        printf("%.lf\n", pow(a*b*c, 1/3.0));
    }

    return 0;
}