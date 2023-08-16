#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    scanf("%d", &n);


    for(int i = 0; i < n; i++)
    {
        int freq[3000];
        for(int j = 0; j < 3000; j++)
        {
            freq[j] = 0;
        }
        char str[209] = {0};

        for(int j  = 0; j < 300; j++)
        {
            printf("%d\n", freq[j]);
        }
        ///Scaning the string
        //fflush(stdin);
        //gets(str);
        // getchar();
        // fgets(str, 207, stdin);
        // str[strlen(str)] = '\0';

        // int big = 0;
        // int j = 0;

        // ///making the frequency array (manipulated all capital letters to small letter)
        // while(str[j] != '\0')
        // {
        //     if((str[j] >= 'A') && (str[j] <= 'Z'))
        //     {
        //         str[j] += 32;
        //     }
        //     // freq[(int)str[j]]++;
        //     if ((str[j] >= 'a') && (str[j] <= 'z'))
        //     {
        //         freq[(int)str[j]]++;
        //     }
        //     j++;
        // }

        // ///checking for most occurring letters
        // for(int l = 'a'; l <= 'z'; l++)
        // {
        //     if(big < freq[l])
        //     {
        //         big = freq[l];
        //     }
        // }

        // ///printing value from the freq array
        // for(int z = 'a'; z <= 'z'; z++)
        // {
        //     if(big == freq[z])
        //     {
        //         printf("%c", z);
        //     }
        // }
        // printf("\n");

        // //printf("big = %d\n", big);

        // /*for(int j = 0; j < 301; j++)
        // {
        //     printf("%c = %d\n", j, freq[j]);
        // }*/
    }

    return 0;
}

