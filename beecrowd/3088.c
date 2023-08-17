#include<stdio.h>
#include<string.h>
#define max 100007
int main(void)
{
    char str[max];
    char final[max];

    scanf("%[^\n]s", str);

    printf("%s\n", str);

    int i = 0;
    while(str[i] != '\0')
    {
        if ((str[i] == ' ') && ((str[i+1] == ',') || (str[i+1] == '.')))
        str[i] = -1;
    }

    i = 0;
    int j = 0;
    while(str[i] != '\0')
    {
        if(str[i] != -1)
        {
            final[j] = str[i];
            j++;
        }
        i++;
    }

    printf("%s\n", final);

    return 0;
}