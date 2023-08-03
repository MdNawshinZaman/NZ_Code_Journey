#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char a[25], b[25];
    scanf("%s %s", a, b);

    int x = strlen(a);
    int y = strlen(b);

    // printf("\n%d %d\n", x, y);


    printf("%d\n", atoi(&a[x-1]) + atoi(&b[y-1]));

    return 0;
}