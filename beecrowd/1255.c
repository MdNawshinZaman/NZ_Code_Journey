#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int freq[200] = {0};

    for(int i = 0; i < n; i++)
    {

        char text[209] = {'\0'};
        getchar();
        scanf("%[^\n]s", text);
        text[strlen(text)] = '\0';

        int j = 0;
        while(text[j] != '\0')
        {
            if((text[j] >= 65) && (text[j] <= 90)) freq[text[j] + 32]++;
            else freq[text[j]]++;
            j++;
        }

        int max = 0;

        for(int k = 97; k <= 122; k++)
        {
            if(max < freq[k]) max = freq[k];
        }

        for(int k = 97; k <= 122; k++)
        {
            if(max == freq[k]) printf("%c", k);
        }

        printf("\n");


    }

    return 0;
}
