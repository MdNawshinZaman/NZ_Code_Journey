/*
    1. read 2 scroes
    2. calcutale and print the semester average. (scorers are between 0 to 10)
    3.
*/

#include<stdio.h>

int main(void)
{
    while(1)
    {
        double a, num[2], avg = 0;
        int i = 0, x;
        while(1)
        {
            scanf("%lf", &a);

            if(a >= 0 && a <= 10)
            {
                num[i] = a;
                i++;

            }
            else
            {
                printf("nota invalida\n");
            }
            if(i == 2)
            {
                break;
            }
        }

        avg = (num[0]+num[1])/2.0;
        printf("media = %.2lf\n",avg);

        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        } while (((x == 1) == 0) && ((x == 2) == 0));

        if(x == 2) {break;}

    }
    return 0;
}