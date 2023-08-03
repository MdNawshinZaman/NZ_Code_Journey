#include<stdio.h>
#include<math.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("floor %d / %d = %.lf\n", a, b, floor(a / (float)b));
    printf("ceil %d / %d = %.lf\n", a, b, ceil(a / (float)b));
    printf("round %d / %d = %.lf\n", a, b, round(a / (float)b));

    return 0;
}