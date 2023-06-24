#include<stdio.h>

int main(void)
{
    int a;
    char str[22];

    scanf("%d", &a);
    fflush(stdin);
    scanf("%s", str);

    int k = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        k++;
        i++;
    }

    

    return 0;
}