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

    int num[digit_num];

    int hex_digit, i = 0;
    for (;;)
    {
        hex_digit = v % 16;
        v = v / 16;

        num[i] = hex_digit;

        i++;
        if (v == 0)
        {
            break;
        }
    }

    for (int j = digit_num - 1; j >= 0; j--)
    {
        if(num[j] == 10){printf("A");}
        else if(num[j] == 11){printf("B");}
        else if(num[j] == 12){printf("C");}
        else if(num[j] == 13){printf("D");}
        else if(num[j] == 14){printf("E");}
        else if(num[j] == 15){printf("F");}
        else {printf("%d", num[j]);}
        printf("\n");
    }
    printf("\n");
    return 0;
}