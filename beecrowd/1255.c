#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d%*c", &n);

    char str[207];
    int freq[150];
    for(int i = 0; i < n; i++)
    {
        for(int j = 'a'; j <= 'z'; j++)
        {
            freq[j] = 0;
        }

        scanf("%[^\n]%*c", str);
        int len = strlen(str);
        str[len] = '\0';

        int k = 0, big = 0;
        while(str[k] != '\0')
        {
            if((str[k] >= 'A') && (str[k] <= 'Z')) str[k] += 32;
            if((str[k] >= 'a') && (str[k] <= 'z'))
            {
                freq[str[k]]++;

                if(big < freq[str[k]])
                {
                    big = freq[str[k]];
                }
            }
            k++;
        }

        for(int  z = 'a'; z <= 'z'; z++)
        {
            if(freq[z] == big)
            {
                printf("%c", z);
            }
        }
        printf("\n");

    }

    return 0;
}
