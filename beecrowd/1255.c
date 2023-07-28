#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        char freq[200] = '\0', text[209] = '\0';
        scanf("%[^\n]s", text);
        freq[strlen(text)] = '\0';

        int j = 0;
        while(freq[j] != '\0')
        {
            freq[text[j]]++;
        }

        int max = 0;

        
    }

    return 0;
}