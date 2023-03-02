#include <stdio.h>

int main(void)
{
    unsigned long long int v;
    scanf("%llu", &v);

    int digit_num = 1;

    for (;;)
    {
        v = v / 10;
        if (v > 0)
        {
            digit_num++;
        }
        if (v == 0)
        {
            break;
        }
    }
    // printf("%d\n", digit_num);

    char num[digit_num];

    int hex_digit, i = 0;
    for (;;)
    {
        hex_digit = v % 16;
        v = v / 16;
        switch (hex_digit)
        {
        case 10:
            num[i] = 'A';
            break;
        case 11:
            num[i] = 'B';
            break;
        case 12:
            num[i] = 'C';
            break;
        case 13:
            num[i] = 'D';
            break;
        case 14:
            num[i] = 'E';
            break;
        case 15:
            num[i] = 'F';
            break;
        default:
            num[i] = hex_digit;
            break;
        }
        if (v == 0)
        {
            break;
        }
    }

    for (int j = digit_num - 1; j > 0; j--)
    {
        printf("%c", num[j]);
    }
    printf("\n");
    return 0;
}