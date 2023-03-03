#include <stdio.h>

int main(void)
{
    int v;
    scanf("%d", &v);

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
    //printf("%d\n", digit_num);

    int num[digit_num];

    int hex_digit, i = 0;
    while (1)
    {
        hex_digit = v % 16;
        v = v / 16;
        printf("%d ", hex_digit);
        num[i] = hex_digit;

        i++;
        if (v == 0)
        {
            break;
        }
    }

    for(int y = 0; y < digit_num; y++)
    {
        printf("%d\n", num[y]);
    }

    /*for (int j = digit_num - 1; j >= 0; j--)
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
    printf("\n");*/
    return 0;
}