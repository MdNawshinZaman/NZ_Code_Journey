#include<stdio.h>

int main(void)
{
    double a, b, media;

    while(1)
    {
        do
        {
            scanf("%d", &a);
            if((a < 0) ||(a > 10)){printf("nota invalida\n");}
        }while((a < 0) || (a > 10));

        do
        {
            scanf("%d", &b);
            if((b < 0) ||(b > 10)){printf("nota invalida\n");}
        }while((b < 0) || (b > 10));

        media = (a + b) / 2.0;
        printf("%d", media);

        int z;
        do
        {
            printf("novo calculo (1-sim 2-nao)\n")
            scanf("%d", &z);

            switch(z)
            {
                case 1:
                    continue;
                case 2:
                    goto END;
            }

        }while((test != 1) || (test != 2) )
    }

END:

    return 0;
}