#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[107], b[107], c[107];
    scanf("%[^\n]s", a);
    a[strlen(a)] = '\0';
    getchar();
    scanf("%[^\n]s", b);
    b[strlen(b)] = '\0';
    getchar();
    scanf("%[^\n]s", c);
    c[strlen(c)] = '\0';

    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);
    //printf("%s%s%s\n", a, b, c);
    int i = 0;
    while(a[i] != '\0')
    {
        printf("%c", a[i]);
        if(i == 9) break;
        i++;
    }

    i = 0;
    while(b[i] != '\0')
    {
        printf("%c", b[i]);
        if(i == 9) break;
        i++;
    }

    i = 0;
    while(c[i] != '\0')
    {
        printf("%c", c[i]);
        if(i == 9) break;
        i++;
    }

    return 0;
}