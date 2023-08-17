#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d%*c", &n);

    char str[1007];
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

        int j = 0;
        while(str[j] != '\0')
        {

            if(str[j] >= 'a' && str[j] <= 'z')
            {
                freq[(int)str[j]] = 1;
            }
            j++;
        }

        int sum  = 0;
        for(int k = 'a'; k <= 'z'; k++)
        {
            sum += freq[k];
        }


        //printf("%d\n", sum);


        if (sum == 26) printf("frase completa\n");
        else if (sum >= 13) printf("frase quase completa\n");
        else printf("frase mal elaborada\n");
    }

    return 0;
}
