#include <stdio.h>

int main(void)
{
    // printf("Hello Worlds!\n");
    char ans[20];
    scanf("%[^\n]s%*c", ans);
    printf("Hello, %s!\n", ans);
    return 0;
}
