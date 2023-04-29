#include <stdio.h>
#include <string.h>

int main(void)
{
    char number[1002];
    while(scanf("%s", number) != EOF)
    {
        int len = strlen(number);

        int digit_arr[10];
        for(int i = 0; i < len, i++)
        {
            switch(number[i])
            {
                case '0':
                    led += 6;
                    break;
                case '1':
                    led += 2;
                    break;
                case '2':
                    led += 5;
                    break;
                case '3':
                    led += 5;
                    break;
                case '4':
                    led += 4;
                    break;
                case '5':
                    led += 5;
                    break;
                case '6':
                    led += 6;
                    break;
                case '7':
                    led += 3;
                    break;
                case '8':
                    led += 7;
                    break;
                case '9':
                    led += 6;
                    break;
            }
        }
    }

    return 0;
}