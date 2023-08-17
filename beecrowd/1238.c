#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d%*c", &n);

    char str1[51], str2[51];
    for(int i = 0; i < n; i++)
    {
        scanf("%s%*c%s%*c", str1, str2);
        int len1 = strlen(str1);
        int len2 = strlen(str2);

        int big =  (len1 >  len2) ? len1:len2;

        int j = 0;
        while(j < big)
        {
            if(j < len1)
            {
                printf("%c", str1[j]);
            }
            if(j < len2)
            {
                printf("%c", str2[j]);
            }
            j++;
        }
        printf("\n");
    }

    return 0;
}
