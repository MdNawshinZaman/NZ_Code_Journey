#include <stdio.h>
#include <string.h>

int main(void)
{
    char number[1002];
    while(scanf("%s", number) != EOF)
    {
        int len = strlen(number);

        int digit_arr[10] = {0000000000};
        for(int i = 0; i < len; i++)
        {
            switch(number[i])
            {
                case '0':
                    digit_arr[0]++;
                    break;
                case '1':
                    digit_arr[1]++;
                    break;
                case '2':
                    digit_arr[2]++;
                    break;
                case '3':
                    digit_arr[3]++;
                    break;
                case '4':
                    digit_arr[4]++;
                    break;
                case '5':
                    digit_arr[5]++;
                    break;
                case '6':
                    digit_arr[6]++;
                    break;
                case '7':
                    digit_arr[7]++;
                    break;
                case '8':
                    digit_arr[8]++;
                    break;
                case '9':
                    digit_arr[9]++;
                    break;
            }
        }

        int max = digit_arr[0];
        for(int i = 1; i < 10; i++)
        {
            if(max < digit_arr[i])
            {
                max = digit_arr[i];
            }
        }

        int num = 0;
        for(int i = 0; i < 10; i++)
        {
            if(max == digit_arr[i])
            {
                num = i;
            }
        }
        /*for(int i = 0; i < 10; i++)
        {
            printf("%d ", digit_arr[i]);
        }
        printf("\n");*/

        printf("%d\n", num);
    }

    return 0;
}