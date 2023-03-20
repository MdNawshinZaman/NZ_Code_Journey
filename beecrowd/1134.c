#include<stdio.h>

int main(void)
{
    int n, a = 0, g = 0, d = 0;
    while(1)
    {
        scanf("%u", &n);

        if(n == 1){a++;}
        if(n == 2){g++;}
        if(n == 3){d++;}
        if(n == 4){break;}
    }

    printf("MUITO OBRIGADO\nAlcool: %u\nGasolina: %u\nDiesel: %u\n", a, g, d);

    return 0;
}