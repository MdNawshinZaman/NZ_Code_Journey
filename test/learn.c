#include<stdio.h>

int main(void)
{
    char a[107], b[107], c[107];
    scanf("%s", a);
    fflush(stdin);
    scanf("%s", b);
    fflush(stdin);
    scanf("%s", c);

    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);
    printf("%s%s%s\n", a, b, c);

    return 0;
}