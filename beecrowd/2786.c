#include<stdio.h>
#include<math.h>

int main(void)
{
    int l, c;
    scanf("%d %d", &l, &c);

    int full = 0, half = 0;

    half = ((l - 1) * 2) + ((c - 1 ) * 2);
    full = ((l * c) * 2) - 1 - (half / 2);

    printf("%d\n%d\n", full, half);

    return 0;
}