#include<stdio.h>

int main(void)
{
    double a, b, media;

    while(1)
    {
        do
        {
            scanf("%lf", &a);
            if((a < 0) ||(a > 10)){printf("nota invalida\n");}
        }while((a < 0) || (a > 10));

        do
        {
            scanf("%lf", &b);
            if((b < 0) ||(b > 10)){printf("nota invalida\n");}
        }while((b < 0) || (b > 10));

        media = (a + b) / 2.0;
        printf("%.2lf\n", media);

        int z;
        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &z);

            if(z == 1)
            {
                continue;
            }
            else if(z == 2)
            {
                goto END;
            }

        }while((z != 1) && (z != 2));
    }

END:

    return 0;
}