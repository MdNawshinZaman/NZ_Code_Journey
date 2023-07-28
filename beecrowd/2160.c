#include<stdio.h>
#include<string.h>

int main(void)
{
    char text[1000];
    scanf("%[^\n]s", text);
    int len = strlen(text);

    if(len <= 80)
    {
        printf("YES\n");
    }
    else printf("NO\n");

    return 0;
}