#include<stdio.h>

int main(void)
{
    int bills[] = {2, 5, 10, 20, 50, 100};
    int price, paid, change, sum;
    while(1)
    {
        sum = 0;
        scanf("%d %d", &price, &paid);

        change = paid - price;

        int change_note[6];
        for(int i = 5; i >= 0; i--)
        {
            change_note[i] = paid / bills[i];
            paid -= change_note[i] * bills[i];

            sum += change_note[i];
        }

        if(sum <= 2)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }



    return 0;
}