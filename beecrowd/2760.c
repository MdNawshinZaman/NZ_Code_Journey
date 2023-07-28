#include<stdio.h>

int main(void)
{
    char a[107], b[107], c[107];
    scanf("%[^\n]s", a);
    fflush(stdin);
    scanf("%[^\n]s", b);
    fflush(stdin);
    scanf("%[^\n]s", c);

    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);
    printf("%s%s%s\n", a, b, c);

    return 0;
}