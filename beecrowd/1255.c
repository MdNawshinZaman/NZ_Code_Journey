#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int freq[200];

    for(int i = 0; i < n; i++)
    {

        char text[209] = '\0';
        scanf("%[^\n]s", text);
        freq[strlen(text)] = '\0';

        int j = 0;
        while(text[j] != '\0')
        {
            if((text[j] >= 'A') && (text[j] <= 'Z')) freq[text[j] + 32]++;
            else freq[text[j]]++;
        }

        int max = 0;

        for(int i = 'a'; i <= 'z'; i++)
        {
            if(max < freq[i]) max = freq[i];
        }

        for(int i = 'a'; i <= 'z'; i++)
        {
            if(max == freq[i])
            printf("%c", i);
        }

    }

    return 0;
}