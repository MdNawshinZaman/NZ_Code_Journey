#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[100007];
    char final[100007];

    scanf("%[^\n]", str);

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