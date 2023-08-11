#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d", &n);


    for(int i = 0; i < n; i++)
    {
        int freq[300] = {0};
        char str[209];
        ///Scaning the string
        fflush(stdin);
        gets(str);

        int big = 0;
        int j = 0;

        ///making the frequency array (manipulated all capital letters to small letter)
        while(str[j] != '\0')
        {
            if((str[j] >= 65) && (str[j] <= 90))
            {
                freq[str[j] + 32]++;
            }
            else freq[str[j]]++;
            j++;
        }

        ///checking for most occurring letters
        for(int j = 97; j <= 122; j++)
        {
            if(big < freq[j])
            {
                big = freq[j];
            }
        }

        ///printing value from the freq array
        for(int z = 97; z <= 122; z++)
        {
            if(big == freq[z])
            {
                printf("%c", z);
            }
        }
        printf("\n");

        //printf("big = %d\n", big);

        /*for(int j = 0; j < 301; j++)
        {
            printf("%c = %d\n", j, freq[j]);
        }*/
    }

    return 0;
}

