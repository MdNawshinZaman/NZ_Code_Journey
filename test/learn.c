#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    char str[n+1];
    scanf("%s", str);

    printf("%s\n", str);

    char c;
    int i = 0;
    while(getchar(c) != '\0')
    {
        printf("%c", str[i++]);
    }

    return 0;
}
