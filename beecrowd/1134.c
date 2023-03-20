#include<stdio.h>

int main(void)
{
    int n, a = 0, g = 0, d = 0;
    do{
        scanf("%u", &n);

        if(n == 4){break;}
        switch(n)
        {
            case 1:
                a++;
                break;
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;
        }
    }while((n < 1) || (n > 4));

    printf("MUITO OBRIGADO\nAlcool: %u\nGasolina: %u\nDiesel: %u\n", a, g, d);

    return 0;
}