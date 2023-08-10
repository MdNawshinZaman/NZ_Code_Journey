#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        char srt[6];
        fflush(stdin);
        scanf("%s", str);

        if(strlen(str) == 5)
        {
            printf("3\n");
        }
        else
        {
            if(str[0] == 'o' || str[1] == 'n' || str[2] == 'e')
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
    }

    return 0;
}