#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        char number[101];
        scanf("%s", number);

        int len = strlen(number), led = 0;

        for(int j = 0; j < len; j++)
        {
            switch(number[j])
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

        printf("%d leds\n", led);

    }

    return 0;
}