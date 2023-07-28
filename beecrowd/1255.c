#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int freq[200];

    for(int i = 0; i < n; i++)
    {

        char text[209];
        getchar();
        scanf("%[^\n]s", text);
        freq[strlen(text)] = '\0';

        int j = 0;
        while(text[j] != '\0')
        {
            if((text[j] >= 'A') && (text[j] <= 'Z')) freq[text[j] + 32]++;
            else freq[(int)text[j]]++;
            j++;
        }

        int max = 0;

        for(int k = 'a'; k <= 'z'; k++)
        {
            if(max < freq[k]) max = freq[k];
        }

        for(int k = 'a'; k <= 'z'; k++)
        {
            if(max == freq[k])
            printf("%c", k);
        }

        printf("\n");

    }

    return 0;
}