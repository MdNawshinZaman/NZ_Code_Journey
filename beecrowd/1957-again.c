#include<stdio.h>

int main(void)
{
    unsigned long long int v;
    scanf("%llu", &v);

    int digit_num = 1;
    for(;;)
    {
        v = v / 10;
        if(v > 0){digit_num++;}
        if(v == 0){break;}
    }
    //printf("%d\n", digit_num);

    int hex_digit;
    for(;;)
    {
        hex_digit = v % 16;
        switch(hex_digit)
        {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d", hex_digit);
                break;
        }
    }



    return 0;
}