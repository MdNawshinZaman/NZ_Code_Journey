#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d%*c", &n);

    for(int i = 0; i <  n; i++)
    {
        char str1[51], str2[51];
        scanf("%s%*c%s%*c", str1, str2);

        int len1 = strlen(str1);
        int len2 = strlen(str2);

        
    }

    return 0;
}